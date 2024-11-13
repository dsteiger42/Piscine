/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:19:21 by dsteiger          #+#    #+#             */
/*   Updated: 2024/02/15 11:25:31 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	diff = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * diff);
	if (*range == NULL)
		return (-1);
	else
	{
		i = 0;
		while (i < diff)
		{
			(*range)[i] = min + i;
			i++;
		}
		return (diff);
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*result;
	int	size;

	result = NULL;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&result, min, max);
	if (size >= 1)
		printf("%d", size);
	free(result);
}*/
