/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:42:52 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/11 18:23:36 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
	{
		return (0);
	}
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
	{
		return (0);
	}
	i = 3;
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
	i = i + 2;
	}
	return (1);
}
#include <stdio.h>
int main (void)
{
    int i;
    i = ft_is_prime(456);
	printf("%d", i);
    return 0;
    
}