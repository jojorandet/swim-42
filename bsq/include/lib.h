/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:40:05 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/10 14:41:51 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <stdlib.h>
# include <unistd.h>
# include "string.h"
# define BUFFER_SIZE 100

void	put_str(char *str);
void	put_char(char c);
int		is_space(char c);
int		ft_atoi(char	*str);
char	*read_all(int fd);

#endif
