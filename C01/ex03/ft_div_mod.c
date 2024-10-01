/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:31:38 by jrandet           #+#    #+#             */
/*   Updated: 2024/08/22 19:06:47 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int x;
	int y;
	int division;
	int mod;

	x = 10;
	y = 2;
	division = 0;
	mod = 0;
	ft_div_mod(x, y, &division, &mod);
	printf("%d  %d", division, mod);
	return (0);
}*/
