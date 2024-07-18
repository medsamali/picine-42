/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:30:14 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/15 16:48:53 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <stdio.h>
int	ft_leng(char *str)
{
	int	i;

	i = 0;
	while (str)
		i++;
	return (i);
}

int	check_base(char *base, int size_base)
{
	int	i;
	int	j;

	i = 0;
	if (size_base < 2)
		return (0);
	while ((base[i] >= 9 && base[i] <= 13) || base[i] == 32 \
			|| base[i] == '+' || base[i] == '-')
		i++;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == base[j])
			return (0);
		i++;
		j++;
	}	
}

int	ft_count(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_checkpos(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	atoi_base(char *str, char *base)
{
	int	i;
	int	signe;
	int	res;
	int	pos;

	i = 0;
	res = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
	while (str[i] == '+' || str[i == '-'])
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i])
	{
		pos = ft_checkpos(base,str[i]);
		if (pos < 0)
			return (0);
		res = res * ft_count(base) + pos;
		i++;
	}
	return (res * signe);
}

int	ft_count_caracter(int nb, int size_base)
{
	int				count ;
	unsigned int	n;

	n = nb;
	if (nb <= 0)
		count = 1;
	if (nb < 0)
		n = nb * -1;
	while (n > 0)
	{
		n = n / size_base;
		count ++;
	}	
	return (count);
}

char	*atoi_base(int nb, const char *base)
{
	int				size_base;
	int				count;
	char			*str;
	unsigned int	nbr_n;

	size_base = ft_count(base);
	count = ft_count_caracter(nb, size_base);
	str = malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[count] = '\0';
	if (nb < 0)
		{str[0] = '-';
		nbr_n = nb * -1;}
	nbr_n = nb;
	while (count > 0 && nbr_n > 0)
	{
		str[count] = base[nbr_n % size_base];
		nbr_n = nbr_n / size_base;
		count--;
	}
	if (nb == 0)
	{
		str[0] = base[0];
	}
	return (str);
}
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*str;
	char	*prefix_result;
	int		i;

	if (check_base(base_from, ft_count(base_from)) \
	|| check_base(base_to, ft_count(base_to)))
	{
		return (NULL);
	}
	number = atoi_base(nbr, base_from);
	*str = atoi_base(nbr, base_to);
	if (str && str[0] == '-')
	{
		prefix_result = malloc(ft_count(str) + 2);
		if (!prefix_result)
		{
			*prefix_result = NULL;
			return (NULL);
		}
		prefix_result[0] = '\'';
		while (str)
		{
			prefix_result[i + 1] = str[i];
			i++;
		}
		str = prefix_result;
		return (str);
	}
}
