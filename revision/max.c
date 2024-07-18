/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:03:09 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/17 18:11:26 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int     max(int *tab, unsigned int len)
{
    int i ;
    int max;
    
    i = 0;
    max = 0;
    while(i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}
int main()
{
    int tab[] = {0,1,5,9,3,7,7};
    int len;
    len = 7;
    printf("%d",max(tab,len));
    return (0);
}