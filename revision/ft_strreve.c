/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:50:33 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/17 17:56:23 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strreve(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i--;	//important il faut pas oublier 
	while (i > j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
	return (str);
}

int	main()
{
	char	str[]= "abcj";
	char	*ft;
	ft = ft_strreve(str);
	printf("%s",ft);
	return (0);
}