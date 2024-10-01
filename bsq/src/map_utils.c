/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:32:56 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/11 19:46:41 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_utils.h"

int	is_in_square(t_map *map, int x, int y)
{
	int	is_in_x;
	int	is_in_y;

	is_in_x = ((map->square->x <= x)
			&& x < (map->square->x + map->square->size));
	is_in_y = ((map->square->y <= y)
			&& y < (map->square->y + map->square->size));
	return (is_in_x && is_in_y);
}

int	is_valid_map_content(char *str)
{
	int		size;
	char	charset[2];
	char	nb_lines;

	if (!*str)
		return (0);
	if (!is_valid_map_header(str))
		return (0);
	size = ft_atoi(str);
	if (size == 0)
		return (0);
	while (is_number(*str))
		str++;
	charset[0] = *(str++);
	charset[1] = *(str++);
	str += 2;
	nb_lines = 0;
	while (*str && is_valid_line(str, charset[0], charset[1], size))
	{
		str += size + 1;
		nb_lines++;
	}
	if (nb_lines != size)
		return (0);
	return (1);
}

int	is_valid_line(char *start, char empty, char obstacle, int size)
{
	char	*cursor;

	cursor = start;
	while (*cursor && *cursor != '\n')
	{
		if (*cursor != empty && *cursor != obstacle)
			return (0);
		cursor++;
	}
	if (*cursor != '\n')
		return (0);
	if ((cursor - start) != size)
		return (0);
	return (1);
}

int	is_valid_map_header(char *str)
{
	char	*charset;

	if (!is_number(*str))
		return (0);
	while (is_number(*str))
		str++;
	charset = str;
	while (is_printable(*str))
		str++;
	if ((str - charset) != 3)
		return (0);
	if (!is_unique_charset(charset, str))
		return (0);
	if (*(str++) != '\n')
		return (0);
	return (1);
}

int	is_unique_charset(char *start, char *end)
{
	char	*str;

	while (start < end)
	{
		str = start + 1;
		while (str < end)
			if (*(str++) == *start)
				return (0);
		start++;
	}
	return (1);
}
