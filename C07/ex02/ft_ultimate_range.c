/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:25:42 by jrandet           #+#    #+#             */
/*   Updated: 2024/09/11 23:31:47 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = malloc(sizeof(int) * (max - min));
	if (!dest)
		return (-1);
	while (min < max)
		dest[i++] = min++;
	*range = dest;
	return (i);
}
