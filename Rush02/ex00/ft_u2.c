/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:04:16 by jrandet           #+#    #+#             */
/*   Updated: 2024/09/08 23:13:32 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	nb_de_lignes(char *tab)
{
	int	l;
	int	l_count;

	l = 0;
	l_count = 0;
	while (tab[l])
	{
		if (tab[l] == '\n')
			l_count++;
		l++;
	}
	return (l_count + 1);
}

int	open_file(const char *filename)
{
	int	fd;

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		write(1, "CANT OPEN FILE", 14);
		return (-1);
	}
	return (fd);
}

int	count_characters(int fd)
{
	char	buffer[1];
	int		c_count;

	c_count = 0;
	while (read(fd, buffer, sizeof(char)) > 0)
	{
		c_count++;
	}
	return (c_count);
}

char	*read_inside_file(const	char *filename, int c_count)
{
	int		fd;
	char 	*tab_final;

	fd = open_file(filename);
	if (fd == -1)
		return (NULL);
	tab_final = malloc(sizeof(char) * (c_count + 1));
	if (!tab_final)
	{
		write(1, "ERROR MALLOC", 12);
		close (fd);
		return (NULL);
	}
	read(fd, tab_final, sizeof(char) * c_count);
	tab_final[c_count] = '\0';
	close (fd);
<<<<<<< HEAD
	return (tab_dict); // tab final will point to the memory containing the contents fo the file
}

void ft_free(char *tab_final, char **tab_nb, char **tab_wd)
{
	int	i;

	i = 0;
	while(i != j)
	{
		free(tab_nb[i]);
		free(tab_wd[i]);
		i++;
	}
	free(tab_nb);
	free(tab_wd);
	free(tab_final);
=======
	return (tab_final);
>>>>>>> 611e3d6b1bccfbb34b6ec8915ecedec9d6440384
}