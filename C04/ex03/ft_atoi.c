/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:48:29 by jrandet           #+#    #+#             */
/*   Updated: 2024/09/02 14:01:33 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	count_sign;
	int	result;

	i = 0;
	count_sign = 0;
	result = 0;
	while (str[i] && ((9 <= str[i] && str[i] <= 13) || (str[i] == ' ')))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		count_sign++;
		if(count_sign > 1)
			return (0);
		i++;
	}	
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	if (count_sign == 1)
		return (-result);
	return (result);
}

int	main(int argc, char *argv[])
{
    char	str[20] = "-1234aib567";
	printf("%d\n", (ft_atoi(str)));
	printf("%d", (atoi(str)));
    return (0);
}