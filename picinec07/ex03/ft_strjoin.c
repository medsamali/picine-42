/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:31:49 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/16 12:59:11 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <stdio.h>

int	ft_lenth(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_lcompte(char **strs, char *sep, int size)
{
	int	i;
	int	len;

	i = 0 ;
	len = 0 ;
	while (i < size)
	{
		len += ft_lenth(strs[i]);
		i++;
	}
	if(size >= 0)
		len += (ft_lenth(sep) * (size - 1));
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_vide(void)
{	
	char	*s1;

	s1 = (char *)malloc(1);
	if (!s1)
		return (NULL);
	s1[0] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*s1;
	int		len;

	len = 0;
	if (size == 0)
		s1 = ft_vide(); // *s1 = '\0'
	len = ft_lcompte(strs, sep, size);
	s1 = malloc((len + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	s1[0] = '\0';
	//*s1 = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(s1, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(s1, sep);
		}
		i++;
	}
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep);
/*
int	main(int argc, char **argv)
{
	//printf("./ex03/output___said___this___is___a___success :\n");
	
	printf("%s\n",  ft_strjoin(argc, argv, "....."));
	//free(s1);
}
*/

int main(void)
{
	char *s = "Hello";
	char *s2 = "New";
	char *sep = "xxx";
	char *strs[2] ;
	strs[0] = s;
	strs[1] = s2;

	printf("Result is '%s'\n", ft_strjoin(0, strs, sep));	
}


