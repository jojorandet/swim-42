/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:15:33 by jrandet           #+#    #+#             */
/*   Updated: 2024/08/28 18:55:30 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 char	*ft_strncpy(char *dest, char *src, unsigned int n)
 {
	int	i;
	
	i = 0;
	while(src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}

 }

int	main()
{
	char	destarray[] = "";
	char	srcarray[20] = "hello";

	ft_strncpy(destarray, srcarray, 10);
	
}
