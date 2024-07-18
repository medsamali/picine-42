/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:51:43 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/11 18:22:40 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while ((i * i) < nb && i < 46341)
		i++;
	if ((i * i) == nb)
		return (i);
	return (0);
}
/*#include <stdio.h>
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
