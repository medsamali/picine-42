/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:58:10 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/11 18:19:43 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	s;

	i = 1;
	s = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (s <= power)
	{
		i = i * nb;
		s++;
	}
	return (i);
}
/*
#include <stdio.h>

int main (void)
{
    int i = 0 ;
    i = ft_iterative_power(5,-2);
	printf("%d", i);
    return 0;
    
}*/