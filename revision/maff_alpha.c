/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:26:23 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/17 13:39:03 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void maff_alpha(void)
{
    char i = 'a';
    char k; // dimaa nansehaaa
    int j = 0;
    while(i <= 'z')
    {
        if(j % 2 != 0)
            {k = i - 32;// dimaa nansehaaa
            write(1 , &k ,1);}
        else
            write(1 , &i ,1);    
        j++;
        i++;
    }
}
int main(void)
{
    maff_alpha();
}