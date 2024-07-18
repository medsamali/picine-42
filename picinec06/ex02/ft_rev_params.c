/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:27:47 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/09 12:36:07 by  msamaali        ###   ########.fr       */
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

	i = 0;
	while (1 < argc)
	{
		i = 0;
		while (argv[argc -1][i])
		{
			ft_putchar(argv[argc -1][i]);
			i++;
		}
		ft_putchar('\n');
		argc --;
	}
	return (0);
}
