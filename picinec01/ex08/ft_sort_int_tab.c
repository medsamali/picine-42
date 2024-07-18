/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:49:26 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/18 15:27:12 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (size > i)
	{
		j = i + 1;
		while (size > j)
		{
			if (tab[j] < tab[i])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}
/*
int main (void)
{	
	int size = 5;
	int tab[5] = {15,5,20,0,1};
	ft_sort_int_tab(tab, size);
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", tab[i]); 
	}

}*/
