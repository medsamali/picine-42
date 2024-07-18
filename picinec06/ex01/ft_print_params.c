/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:05:42 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/13 13:49:55 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (k < argc)
	{
		i = 0;
		while (argv[k][i])
		{
			ft_putchar(argv[k][i]);
			i++;
		}
		ft_putchar('\n');
		k++;
	}
	return (0);
}
