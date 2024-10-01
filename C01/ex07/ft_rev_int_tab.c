/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:48:18 by jrandet           #+#    #+#             */
/*   Updated: 2024/08/27 17:40:25 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	temp = 0;
	i = 0;
	while (i < ((size - 1) - i))
	{
		temp = tab[i];
		tab[i] = tab[(size -1) - i];
		tab[(size - 1) - i] = temp;
		i++;
	}
}

/*#include <stdio.h>

int main()
{
	int i;
	i = 0;
	
	int tab[]={0,1,2,3,4};

	ft_rev_int_tab(tab, 5);
	
	while(i <= (5 - 1)) // 
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/