/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:18:29 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/11 19:59:16 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "map_utils.h"
#include "square.h"

void	handle_map(int fd)
{
	char	*map_content;
	t_map	*map;

	map_content = read_all(fd);
	if (!map_content)
		return (put_str("Cannot read file descriptor\n"));
	if (!is_valid_map_content(map_content))
		return (put_str("map error\n"));
	map = parse_map(map_content);
	if (!map)
		return (put_str("parsing error\n"));
	add_bigger_square(map);
	if (!map->square)
	{
		put_str("Square cannot be defined\n");
		return ;
	}
	print_map(map);
	put_str("\n");
}

void	print_map(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (y < map->size)
	{
		x = 0;
		while (x < map->size)
		{
			if (is_in_square(map, x, y))
				put_char(map->full);
			else
				put_char(map->cells[y][x]);
			put_str(" ");
			x++;
		}
		put_str("\n");
		y++;
	}
}

t_map	*parse_map(char *content)
{
	t_map	*map;

	map = malloc(sizeof(*map));
	if (!map)
		return (NULL);
	map->size = ft_atoi(content);
	while (is_number(*content))
		content++;
	map->empty = *(content++);
	map->obstacle = *(content++);
	map->full = *(content++);
	map->cells = read_cells(content + 1, map);
	return (map);
}

char	**read_cells(char *content, t_map *map)
{
	char	**cells;
	int		index;
	char	*end;

	cells = malloc(sizeof(*cells) * map->size);
	if (!cells)
		return (NULL);
	index = 0;
	while (*content && (index < map->size))
	{
		end = content;
		while (*end && *end != '\n')
			end++;
		cells[index++] = str_cut(content, end);
		content = end + 1;
	}
	return (cells);
}
