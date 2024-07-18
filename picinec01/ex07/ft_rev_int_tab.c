/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:16:21 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/18 15:20:28 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (size > i)
	{
		swap = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = swap;
		size--;
		i++;
	}
}
