/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:55:08 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/10 16:25:57 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUARE_H
# define SQUARE_H

# include "map.h"

void		add_bigger_square(t_map *map);
t_square	*create_square(void);
void		set_square(t_map *map, int size, int x, int y);
int			get_square_size(t_map *map, int x, int y);
int			is_valid_square_size(
				t_map *map,
				int size,
				int origin_x,
				int origin_y);

#endif
