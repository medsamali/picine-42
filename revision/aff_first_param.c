/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:42:33 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/17 14:30:26 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c, 1);
}

void put_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
int	main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if(argc < 2)
		{write(1 , "\n", 1);
		return (0);}
	while (argv[1][i])
	{
		write(1 ,&argv[1][i], 1);
		i++;
	}
	return 0;
}
