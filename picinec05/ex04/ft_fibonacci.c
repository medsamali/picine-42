/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:40:01 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/11 18:19:26 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index -2) + ft_fibonacci(index -1));
}
/*
#include <stdio.h>
int main (void)
{
    int i = 0 ;
	i = ft_fibonacci(-10);
	printf("%d", i);
	//ft_putnbr(i) ;
    return 0;
	// 0 1 1 2 3 5 8 13 21
	// 0 1 2 3 4 5 6 7  8
}*/