/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:37:57 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/17 14:54:35 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;// faite attention faite tmp pas *tmp

	tmp = *a;
	*a = *b;
	*b = tmp;

}
int main(int argc, char **argv)
{
	int a = 3;
	int b = 6;
	ft_swap(&a, &b);
	printf("%d", b);
}
