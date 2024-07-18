/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:55:00 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/15 22:16:02 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int	ft_count(char *str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
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

int	ft_world_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_check(str[i],charset))
			i++;
	return (i);
}

int	chaine_size(char *str, char *charset)
{
	int	i;
	int s,world_len;
	
	s = 0;
	i = 0;
	while (str[i])
	{
		if(str[i] && ft_check(str[i],charset) == 1)
			i++;
		else
		{
			s++;
			world_len = ft_world_len(&str[i], charset); 
			i = i + world_len;
		}	
	}
	return s;
}
char *ft_malloc_world(char *str,int u)
{
	char	*world;
	int		i;
	world = malloc(sizeof(char) * (u + 1));
	if(!world)
		return(NULL);
	i = 0;
	while(u > i)
	{
		world[i] = str[i];
		i++;
	}	
	world[i] = '\0';
}
char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int 	world_count;
	int 	world_len;
	int		i;
	int 	j;
	world_count = chaine_size(str, charset);
	tab = malloc(sizeof(char) * (world_count + 1));
	if(!tab)
		return(NULL);
	i = 0;
	j = 0;
	while(i < world_count)
		{
			while(str[j] && ft_check(str[j], charset))
				j++;
			world_len = ft_world_len(&str[j],charset);
			tab[i] = ft_malloc_world(&str[j],world_len);
			i++;
			j = j + world_len;
		}
		tab[i] = NULL;
		return (tab);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	//printf("./ex03/output___said___this___is___a___success :\n");
	//printf("%s\n",  ft_strjoin(argc, argv, "."));
	if(argc)
		printf("%d\n",count_chaine_size(argv[1], ".*"));
	//free(s1);
}
/*
while (str)
	{
		if(ft_check(str[0],charset) && !(ft_check(str[1],charset)))
			s++;
		str++;
	}
	return s;*/