/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:12:49 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/17 18:47:56 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_check(char c, char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return(1);
        i++;
    }
    return (0);
}
int main(int argc, char **argv)
{
    int i;
    char existe[256] = {0}; // dimaa nansehaaa
    char *str =argv[1];
    char *str2 =argv[2];
    i = 0;
    if (argc == 3)
    {
        while(str[i])// dimaa nansehaaa
        {
            if(existe[str[i]] == 0)
            {
                ft_putchar(str[i]);
                existe[str[i]] = 1;
            }
            i++;
        }
        i = 0;
         while(str2[i])
        {
            if(existe[str2[i]] == 0)
            {
                ft_putchar(str2[i]);
                existe[str2[i]] = 1;
            }
            i++;
        }
    }
    write(1 , "\n" , 1);
    return(0);
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	seen[256] = {0};
	char	*str;
	char	*str2;

	i = 0;
	if (argc == 3)
	{
		str = argv[1];
		str2 = argv[2];
		while (str[i])// dimaa nansehaaa
		{
			if (seen[(unsigned char)str[i]] == 0)
			{
				ft_putchar(str[i]);
				seen[(unsigned char)str[i]] = 1;
			}
			i++;
		}
		i = 0;
		while (str2[i])
		{
			if (seen[(unsigned char)str2[i]] == 0)
			{
				ft_putchar(str2[i]);
				seen[(unsigned char)str2[i]] = 1;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
*/