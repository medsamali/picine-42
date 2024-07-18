/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:12:13 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/16 19:04:28 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int ft_lenstr(char *str)
{
    int i;
    while(str[i])
		i++;
	return(i);	
}

int	ft_checksep(char c, char * str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
} 

int	ft_lengh_world(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_checksep(str[i], charset))
		i++;
	return (i);
}

int ft_compt_world(char *str, char *charset)
{
	int	i;
	int	s;
	int size_len_sep;
	
	i = 0;
	while (str[i])
	{
		if (str[i] && ft_checksep(str[i], charset) == 1)
			i++;
		else
		{
			s++;
			i = i + ft_lengh_world(&str[i], charset);
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

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**range;
	int		size_world;
	int		size_len_world;
	int		size_len_sep;
	int		j;

	i = 0;
	j = 0;
	if(!charset || charset[0] == '\0')
	{
		return(NULL);
	}
	size_world = ft_compt_world(str, charset);
	size_len_sep = ft_lenstr(charset);
	range = malloc(sizeof (char *) * (size_world + 1));
	if (!range)
		return (NULL);
			
	while (size_world >= i)
	{
		while (str[j] && ft_checksep(str[j], charset))
			j++;
		size_len_world = ft_lengh_world(&str[j], charset);
		range[i] =malloc_world(&str[j], size_len_world);
		j = j + size_len_world;
		i++;
	}
	range[i] = NULL;
	return (range);
}

#include <stdio.h>
int	main()
{
	char *str = ".a.b.c.d";
	char *sep = "";
	char **result = ft_split(str, sep);
	int i = 0;
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
//char	**ft_split(char *str, char *charset)
