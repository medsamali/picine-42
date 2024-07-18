/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:17:54 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/16 17:23:28 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int put_char(char c)
{
    write(1, &c, 1);
}
int ft_len_world(char * str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
int main(int argc , char **argv)
{
    int i;
    int j;
    char *str;
    i = 0;
    j = 0;
    
    if(argc == 2)
    {
        j = ft_len_world(argv[1]);
        str = argv[1];
        while(j >= 0)
        {write(1, &str[j], 1);
        j--;}
        
    }
    put_char('\n');
    return (0);
}