/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:25:09 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/17 19:28:56 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(char *src)
{
    int i;
    char *dest;
    int j;

    j = 0;
    i = 0;
    while (src[i])
        i++;
    dest =malloc(sizeof(char) * (i + 1));
    if(!dest)
        return(NULL);
    while(src[j])
    {
        dest[j] = src[i];
    }
    dest[j] = '\0';
    
}