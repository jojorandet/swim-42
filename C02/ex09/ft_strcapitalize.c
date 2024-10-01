/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:15:45 by jrandet           #+#    #+#             */
/*   Updated: 2024/08/29 00:19:13 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_nw;

	i = 0;
	is_nw = 1;
	while (str[i])
	{	
		if (is_nw && 'a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
		else if (!is_nw && 'A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		is_nw = !(('A' <= str[i] && str[i] <= 'Z')
				|| ('a' <= str[i] && str[i] <= 'z')
				|| ('0' <= str[i] && str[i] <= '9'));
		i++;
	}
	return (str);
}

/*int	main()
{
	char	array[] = "hello my 42name  huI+lo"; 
	printf("%s",ft_strcapitalize(array));
	return (0);

}*/
