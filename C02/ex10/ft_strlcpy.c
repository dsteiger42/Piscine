/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:08:07 by dsteiger          #+#    #+#             */
/*   Updated: 2024/01/29 20:40:12 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size < 1)
	{
		return (len);
	}
	while (src[i] != '\0' && i < size - 1)
	{ 
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

int	main(void)
{
	char source[] = "DuarteAraujo";
	char destination[5] = "";

	unsigned int copied = ft_strlcpy(destination, source, sizeof(destination));
	
	printf("copied str: %s\n", destination);
	printf("length of the copied str: %u", copied);
	return (0);
}
