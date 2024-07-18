/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goint.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:43:20 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/18 12:58:13 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void	put_char(char c)
{
	write(1, &c, 1);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	total_str_len(int size, char **strs, char *sep)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + str_len(strs[i]);
		i++;
	}
	if (size >= 0)
		len = len + (str_len(sep) * (size - 1));
	return (len);
}

char	*concat(char *strs, char *sep) //verfier bien
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	len = str_len(strs);
	while (sep[i])
	{
		strs[len] = sep[i];
		i++;
		len++;
	}
	strs[len] = '\0';
	return (strs);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	i = 0;
    if (size == 0)
		*str = '\0';
	str = malloc(sizeof(char) * (total_str_len(size, strs, sep) + 1));
	if (!str)
		return (NULL);
	while (i < size)
	{
		concat(str, strs[i]);
		if (i < size - 1)
			concat(str, sep);
		i++;
	}
	return (str);
}
int main(void)
{
	char *s = "Hello";
	char *s2 = "New";
	char *sep = "xxx";
	char *strs[2] ;
	strs[0] = s;
	strs[1] = s2;

	printf("Result is '%s'\n", ft_strjoin(2, strs, sep));	
}