/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:14:25 by dsteiger          #+#    #+#             */
/*   Updated: 2024/01/27 16:28:06 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str [lenght] != '\0')
		lenght++;
	return (lenght);
}

/*int	main(void)
{
	char	*str;

	str = "42Lisboa";
	printf("%d", ft_strlen(str));
}*/
