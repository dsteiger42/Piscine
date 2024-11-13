/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 10:40:49 by dsteiger          #+#    #+#             */
/*   Updated: 2024/01/27 10:56:02 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp; 

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main()
{
	int x;
	int y;

	x = 2;
	y = 4;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}*/
