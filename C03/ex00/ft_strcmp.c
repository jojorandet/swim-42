/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 00:28:54 by jrandet           #+#    #+#             */
/*   Updated: 2024/08/30 00:23:31 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

/*int main()
{
	char	sr1 [] = "aaaaaa";
	char	sr2 [] = "aaazaaa";
	int	resultat = ft_strcmp(sr1, sr2);

	printf("%d", resultat);
	return (0);
}*/