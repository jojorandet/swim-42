/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:35:37 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/11 17:10:10 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_UTILS_H
# define MAP_UTILS_H
# include "map.h"
# include "char.h"

int	is_in_square(t_map *map, int x, int y);
int	is_unique_charset(char *start, char *end);
int	is_valid_map_content(char *str);
int	is_valid_map_header(char *str);
int	is_valid_line(char *line, char empty, char obstacle, int size);

#endif
