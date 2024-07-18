/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:25:24 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/15 19:58:00 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_vide(int size)
{	
	int	*s1;

	if (size == 0)
	{
		s1 = (int *)malloc(1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
		return (s1);
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;
	int				k;

	i = 0;
	k = min;
	if (min >= max)
		return (0);
	if (max - min == 0)
		*range = ft_vide(max - min);
	*range = malloc((max - min) * sizeof(int));
	if (!*range)
		return (-1);
	while (k < max)
	{
		(*range)[i] = k;
		k++;
		i++;
	}
	return (max - min);
}
/*
#include<stdio.h>
int main(void)
{
	int *tab;
	int i;
	int k = 0;
	
	i = ft_ultimate_range(&tab,5, 14);
	while (tab[k])
	{
		printf("test : %d \n",tab[k]);
		k++;
    	}
	return 0;

}*/