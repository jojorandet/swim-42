/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:07:12 by jrandet           #+#    #+#             */
/*   Updated: 2024/09/03 15:11:44 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		result = nb * (ft_recursive_power(nb, power - 1));
	return (result);
}

/*int	main()
{
	int nb;
	int power;

	nb = 4;
	power = 2;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}*/