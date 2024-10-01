/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft-ne_pas_toucher.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 21:54:16 by jrandet           #+#    #+#             */
/*   Updated: 2024/09/08 15:33:36 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	nb_de_lignes(char *tab)
{
	int	l;
	int	l_count;

	l = 0;
	while (tab[l])
	{
		if (tab[l] == '\n')
			l_count++;
		l++;
	}
	return (l_count + 1);
}

int	main(void)
{
	int	nbr;
	int	c_count;
	int	i;
	int	j;
	int	previous_position;
	int	test;
	char	buffer[1];
	char	*tab_final;
	char	**tab_chiffre;
	char	**tab_lettre;

	i = 0;
	j = 0;
	nbr = open("numbers.dict", O_RDWR);
	if (nbr == -1)
	{
		write(1, "CANT OPEN FILE", 14);
		return (-1);
	}
	while ((read(nbr, buffer, sizeof(char)) * 1) > 0)
		c_count++;
	tab_final = malloc(sizeof(char) * (c_count + 1));
	if (!tab_final)
	{
		write(1, "ERROR MALLOC", 12);
		close (nbr);
		return (-1);
	}
	close (nbr);
	nbr = open("numbers.dict", O_RDWR);
	if (nbr == (-1))
	{
		write(1, "CANT OPEN FILE", 14);
		free(tab_final);
		return (-1);
	}
	read(nbr, tab_final, sizeof(char) * c_count);
	tab_final[c_count] = '\0';
	close(nbr);

	
	tab_chiffre = malloc(sizeof(char) * nb_de_lignes(tab_final));
	tab_lettre = malloc(sizeof(char) * nb_de_lignes(tab_final));
	if (!tab_chiffre || !tab_lettre)
		return (NULL);
	while (tab_final[i])
	{
		previous_position = i;
		while (tab_final[i] && tab_final[i] != ':')
		{
			i++;
		}
		tab_chiffre[j] = malloc(sizeof(char) * (i - previous_position + 1));
		if (!tab_chiffre[j])
		{
			while (test != j)
			{
				free(tab_chiffre[test]);
				free(tab_lettre[test]);
				test++;
			}
			free(tab_chiffre);
			free(tab_lettre);
			free(tab_final);
			return (-1);
		}
		test = 0;
		while (previous_position < i)
		{
			tab_chiffre[j][test] = tab_final[previous_position];
			previous_position++;
			test++;
		}
		tab_chiffre[j][test] = '\0';
		i += 2;
		previous_position = i;
		while (tab_final[i] && (tab_final[i] != '\n' || tab_final[i]))
		{
			i++;
		}
		tab_lettre[j] = malloc(sizeof(char) * (i - previous_position + 1));
		if (!tab_lettre[j])
		{
			while (test != j)
			{
				free(tab_chiffre[test]);
				free(tab_lettre[test]);
				test++;
			}
			free(tab_chiffre);
			free(tab_lettre);
			free(tab_final);
			free(tab_chiffre[test]);
			return (-1);
		}
		test = 0;
		while (previous_position < i)
		{
			tab_lettre[j][test] = tab_final[previous_position];
			previous_position++;
			test++;
		}
		tab_lettre[j][test] = '\0';
		if (tab_final[i] == '\n')
			i++;
		j++;
	}
	return (0);
}

int main (void)
{

	printf()
}