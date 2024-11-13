/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:59:18 by dsteiger          #+#    #+#             */
/*   Updated: 2024/01/27 14:46:08 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0') 
	{
		write (1, &str[counter], 1);
		counter++;
	}
}

/*int	main(void)
{
	ft_putstr("hello world");
	return (0);
}*/
