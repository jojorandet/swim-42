/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:49:30 by jrandet           #+#    #+#             */
/*   Updated: 2024/08/25 22:48:53 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush_start(int x, int y)
{
	int	col;

	ft_putchar('A');
	col = 0;
	while (col < x - 2)
	{
		ft_putchar('B');
		col++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	rush_middle(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	while (row < y - 2)
	{
		ft_putchar('B');
		col = 0;
		while (col < x - 2)
		{
			ft_putchar(' ');
			col++;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		row++;
	}
}

void	rush_end(int x, int y)
{
	int	col;

	if (y >= 2)
	{
		ft_putchar('C');
		col = 0;
		while (col < x - 2)
		{
			ft_putchar('B');
			col++;
		}
		if (x > 1)
			ft_putchar('A');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "valeur fausse\n", 14);
		return ;
	}
	rush_start(x, y);
	rush_middle(x, y);
	rush_end(x, y);
}
