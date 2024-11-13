/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:08:07 by dsteiger          #+#    #+#             */
/*   Updated: 2024/01/30 22:18:05 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int	main(void)
{
	char str1[] = "hello";
	char str2[] = "hello";
	int result1 = ft_strcmp(str1, str2);
	printf("Example 1: Result=%d\n", result1);
	
	char str3[] = "hello";
	char str4[] = "hel";
	int result2 = ft_strcmp(str3, str4);
	printf("Example 2: Result=%d\n", result2);
    
	char str5[] = "hel";
	char str6[] = "hello";
	int result3 = ft_strcmp(str5, str6);
	printf("Example 3: Result=%d\n", result3);
}*/
