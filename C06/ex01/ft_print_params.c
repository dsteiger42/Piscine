/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:03:06 by dsteiger          #+#    #+#             */
/*   Updated: 2024/02/06 11:18:34 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	words;
	int	i;

	(void)argc;
	words = 1;
	while (argv[words] != NULL)
	{
		i = 0;
		while (argv[words][i] != '\0')
		{
			ft_putchar(argv[words][i]);
			i++;
		}
		words++;
		write(1, "\n", 1);
	}
}
