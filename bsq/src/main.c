/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:14:24 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/11 14:45:55 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

#include <stdio.h>

int	main(int argc, char	**argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		handle_map(0);
		return (0);
	}
	while (i < argc)
	{
		handle_file(argv[i]);
		i++;
	}
	return (0);
}

void	handle_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		put_str("file not found: ");
		put_str(filename);
		put_str("\n");
		return ;
	}
	handle_map(fd);
	close(fd);
}
