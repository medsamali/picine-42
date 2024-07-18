/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:30:38 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/18 19:52:29 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void put_char(char c)
{
	write(1, &c, 1);
}
void put_nbr(int nbr)
{
	if (nbr == -2147483648)
		write(1,"-2147483648",11);
	if(nbr < 0)
	{
		put_char('-');
		nbr = nbr * -1;
	}
	if(nbr <= 9)
		put_char(nbr + '0');
	else
	{
		put_nbr(nbr / 10);
		put_nbr(nbr % 10);
	}
}

int atoi(char *str)
{
	int i;
	int	signe;
	int c;

	i = 0;
	c = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
	if (str[i] == '-' || str[i] == '+') // attention
		{
			if (str[i] == '-' )// attention
				signe = signe * -1;
			i++;
		}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = c * 10 + (str[i] - '0');
		i++;
	}
	return (c * signe); //attention
}
int	ft_prime(int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 1)
		return (0);
	if (nbr == 2)
		return (1);
	if (nbr % 2 == 0)
		return (0);
	i = 3;
	while (i <= nbr / i)
	{
		if (nbr % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}
int main()
{
    int i = 5;
    printf("%d",ft_prime(4));
}