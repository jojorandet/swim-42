/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teststrcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 00:08:31 by jrandet           #+#    #+#             */
/*   Updated: 2024/08/30 00:30:39 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcmp.c"
#include <string.h>
#include <stdio.h>

int main()
{
	char	str1[] = "";
	char	str2[] = "ffff";
	int resultat1 = strcmp(str1, str2);
	int	resultat2 = ft_strcmp(str1, str2);

	printf("theirs %d\n\n", resultat1);
	printf("mine %d\n\n", resultat2);
}