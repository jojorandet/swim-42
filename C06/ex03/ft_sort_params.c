/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:32:25 by jrandet           #+#    #+#             */
/*   Updated: 2024/09/05 17:49:43 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char	*str1, char	*str2)
{
	int	i;

	i = 0;
	while ((str1[i] && str2[i]) && (str1[i] == str2[i]))
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

void	ft_putstr(int argc, char **argv)
{
	int	j;
	int	i;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	j;
	char	*temp;

	j = 1;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	while (j < argc - 1)
	{
		if (ft_strcmp(argv[j], argv[j + 1]) > 0)
		{
			temp = argv[j];
			argv[j] = argv[j + 1];
			argv[j + 1] = temp;
			j = 1;
		}
		else
			j++;
	}
	ft_putstr(argc, argv);
	return (0);
}
