/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:55:06 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/11 18:19:59 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{	
		total = total * nb;
		nb --;
	}
	return (total);
}
/*
#include <stdio.h>
int main (void)
{
    int i = 0 ;
    i = ft_iterative_factorial(-1);
	printf("%d", i);
    return 0;
    
}*/