/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:30:59 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/15 19:57:54 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	tab = malloc(((max - min)) * sizeof(int));
	if (!tab)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min ++;
	}
	return (tab);
}
/*
#include<stdio.h>
int main(void)
{
	int *tab;
	int i;
	
	i = 0;
	tab = ft_range(5, 20);
	while (tab[i])
	{
		printf("test : %d",tab[i]);
		i++;
	}
	return 0 ;

}*/