/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:29:00 by mmouaffa          #+#    #+#             */
/*   Updated: 2024/09/08 23:31:11 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <fcntl.h>

void	ft_putstr(char *str);
void 	ft_free(char *tab_dict, char **tab_nb, char **tab_wd);
int		ft_strlen(char *str);
int	    ft_recursive_power(int nb, int power);
int		ft_strcmp(char *s1, char *s2);
int		nb_de_lignes(char *tab);
int		open_file(const char *filename);
int		count_characters(int fd);
char	*read_inside_file(const	char *filename, int c_count);
char	*ft_strcat(char *dest, char *src);
char	**ft_dissection(char *str);
char    **read_dictionary(char *filename);
char	*read_inside_file(const	char *filename, int c_count);

#endif