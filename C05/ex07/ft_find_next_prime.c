/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:03:06 by dsteiger          #+#    #+#             */
/*   Updated: 2024/02/05 14:02:55 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (!(nb % i != 0))
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

int	main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(-2));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(50));
	printf("%d\n", ft_find_next_prime(2147483647));
}
