/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 20:49:33 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/18 21:45:33 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
int check_sep(char c)
{
    int i;
    i = 0;
    if(c =='\t' || c =='\n' || c ==' ')
        return 1 ;
    return 0;
}
int len_world(char *str)
{
	int i;
	
	i = 0;
	while(str[i] && !check_sep(str[i]))
		i++;
	return (i);
}
int size_world_total(char *str)
{
	int	i;
	int	s;
	int size_len_sep;
	
	i = 0;
    s = 0;
	while (str[i])
	{
		if (str[i] && check_sep(str[i]) == 1)
			i++;
		else
		{
			s++;
			i = i + len_world(&str[i]);
		}
	}
	return (s);
}
char	*malloc_world(char *str, int u)
{
	int		i;
	char	*tab;

	i = 0;
	tab = malloc(sizeof(char) * (u + 1));
	if (!tab)
		return (NULL);
	while (i < u)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return(tab);
}
char	**ft_split(char *str)
{
	int i,j;
	int len_worlds;
	int len_size_world;
	char **range;
	i = 0;
	j = 0;
	
	len_size_world = size_world_total(str); 
	range = malloc(sizeof (char *) * (len_size_world + 1));
	if (!range)
		return (NULL);
	while (len_size_world >= i)
	{
		while (str[j] && check_sep(str[j]))
			j++;
		len_worlds = len_world(&str[j]);
		range[i] =malloc_world(&str[j], len_worlds);
		j = j + len_worlds;
		i++;
	}
	range[i] = NULL;
	return (range);
}
#include <stdio.h>
int	main()
{
	char *str = ".a b c d";
	char *sep = "";
	char **result = ft_split(str);
	int i = 0;
	printf("%d\n", size_world_total(str));
	while (!result)
	{
		return(0);
	}
	
	while (*result[i] != '\0')
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
