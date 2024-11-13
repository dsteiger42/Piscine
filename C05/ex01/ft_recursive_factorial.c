/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:03:06 by dsteiger          #+#    #+#             */
/*   Updated: 2024/02/04 15:46:10 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}

/*int	main(void)
{       
	int	nb;
        
	nb = -5;
	printf("%d", ft_recursive_factorial(nb));
	return (0);
}*/
