/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:46:53 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/11 16:38:15 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include <unistd.h>
# include <stdlib.h>
# include "string.h"
# include "lib.h"

typedef struct s_square	t_square;
struct s_square {
	int	x;
	int	y;
	int	size;
};
typedef struct s_map	t_map;
struct s_map {
	int			size;
	char		empty;
	char		obstacle;
	char		full;
	char		**cells;
	t_square	*square;
};

void	handle_map(int fd);
t_map	*parse_map(char *content);
char	**read_cells(char *content, t_map *map);
void	print_map(t_map *map);

#endif
