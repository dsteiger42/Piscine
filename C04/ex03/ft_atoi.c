/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:03:06 by dsteiger          #+#    #+#             */
/*   Updated: 2024/02/03 16:51:43 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	parity;

	i = 0;
	parity = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		i = i * 10;
		i = i + *str - 48;
		str++;
	}
	if (parity % 2 == 1)
		return (-i);
	return (i);
}

/*int	main(void)
{
	char *s = "   ---+--+1234ab567";
	printf("%d", ft_atoi(s));
	return (0);
}*/
