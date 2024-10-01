/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 00:17:19 by jrandet           #+#    #+#             */
/*   Updated: 2024/09/11 23:30:47 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*string_add(char *dest, char *src)
{
	while (*src)
	{
		*(dest++) = *(src++);
		dest++;
		src++;
	}
	return (dest);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += ft_strlen(sep);
		i++;
	}
	return (total_len);
}

char	*get_empty_string(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (str)
		str[0] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		total_len;
	char	*str;
	char	*current_position;

	if (size == 0)
		return (get_empty_string());
	total_len = ft_total_len(size, strs, sep);
	str = malloc(sizeof(char) * (total_len + 1));
	if (!str)
		return (NULL);
	current_position = string_add(str, strs[0]);
	j = 1;
	while (j < size)
	{
		current_position = string_add(current_position, sep);
		current_position = string_add(current_position, strs[j]);
		j++;
	}
	*current_position = '\0';
	return (str);
}
