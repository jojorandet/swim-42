/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:39:48 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/11 14:45:55 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	put_str(char *str)
{
	if (!str)
		return ;
	while (*str)
		write(1, str++, 1);
}

void	put_char(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	return (c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ');
}

int	ft_atoi(char *str)
{
	int	n;

	n = 0;
	while ('0' <= *str && *str <= '9')
	{
		n *= 10;
		n += (*str - '0');
		str++;
	}
	return (n);
}

char	*read_all(int fd)
{
	char	buffer[BUFFER_SIZE];
	char	*content;
	char	*next_content;
	ssize_t	buffer_len;
	int		i;

	i = 0;
	content = malloc(sizeof(*content));
	if (!content)
		return (NULL);
	content[0] = '\0';
	buffer_len = 1;
	while (buffer_len > 0)
	{
		buffer_len = read(fd, buffer, BUFFER_SIZE);
		next_content = str_cat(content, buffer, buffer_len);
		free(content);
		content = next_content;
	}
	return (content);
}
