/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:24:22 by dsteiger          #+#    #+#             */
/*   Updated: 2024/02/14 23:06:01 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	i;
	int	*result;

	i = 0;
	diff = max - min;
	if (min >= max)
		return (NULL);
	result = malloc(sizeof(int) * diff);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*result;
	int	i;
	
	i = 0;
	min = 5;
	max = 10;
	result = ft_range(min, max);
	while (result[i])
	{
		printf("%d", result[i]);
		i++;
	}
}*/
