/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:54:47 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/11 14:45:55 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "square.h"

void	add_bigger_square(t_map *map)
{
	int			x;
	int			y;
	int			size;

	map->square = create_square();
	if (!map->square)
		return ;
	y = 0;
	while (y < map->size)
	{
		x = 0;
		while (x < map->size)
		{
			size = get_square_size(map, x, y);
			if (size > map->square->size)
				set_square(map, size, x, y);
			x++;
		}
		y++;
	}
	return ;
}

t_square	*create_square(void)
{
	t_square	*square;

	square = malloc(sizeof(*square));
	if (!square)
		return (NULL);
	square->size = 0;
	square->x = 0;
	square->y = 0;
	return (square);
}

void	set_square(t_map *map, int size, int x, int y)
{
	map->square->size = size;
	map->square->x = x;
	map->square->y = y;
}

int	get_square_size(t_map *map, int x, int y)
{
	int	size;

	size = map->square->size;
	while (is_valid_square_size(map, size, x, y))
		size++;
	return (size - 1);
}

int	is_valid_square_size(t_map *map, int size, int origin_x, int origin_y)
{
	int	x;
	int	y;

	if (origin_x + size > map->size)
		return (0);
	if (origin_y + size > map->size)
		return (0);
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (map->cells[origin_y + y][origin_x + x] != map->empty)
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}
