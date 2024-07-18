/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_print_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:15:38 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/16 15:25:24 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_number(void)
{
    char i = '9';
    while(i >= '0')
    {
        write(1 , &i ,1);
        i--;
    }
}
int main(void)
{
    ft_print_number();
}