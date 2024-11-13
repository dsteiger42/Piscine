/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:08:07 by dsteiger          #+#    #+#             */
/*   Updated: 2024/01/29 19:44:17 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	upper;

	i = 0;
	upper = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (upper == 1 && str[i] >= 'a' && str[i] <= 'z') 
		{
			str[i] = str[i] - 32;
		}
		if (str[i] <= 47 || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 
				&& str[i] <= 96) || str[i] >= 123)
		{
			upper = 1;
		}
		else
		{
			upper = 0;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "heLLO I'm duARTe e tenho 22anos, !!duarte";
	ft_strcapitalize(str1);
	printf("%s", str1);
	return (0);
}*/
