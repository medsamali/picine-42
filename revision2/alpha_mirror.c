/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:19:10 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/17 12:57:27 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int put_char(char c)
{
    write(1, &c,1);
}
int main(int argc, char** argv)
{
    int i ;
    char *str;
    char j = 'a';
    i = 0;
    j = 0;
    if(argc == 2)
    {
        str = argv[1];
        while(str[i])
        {   
            if(str[i] >= 'a' && str[i] <= 'z')
                put_char('z' - (str[i] - 'a')); // put_char(219 - (str[i] ));
            
            if(str[i] >= 'A' && str[i] <= 'Z')
                put_char('Z' - (str[i] - 'A')); // put_char(115 - (str[i] ));
            i++;
        }
        
    }
    return 0;
}