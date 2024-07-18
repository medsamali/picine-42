/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:11:58 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/07 20:39:25 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alph(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z') \
		|| (str >= '0' && str <= '9'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32 ;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') \
		&& ((ft_alph(str[i - 1]) || i == 0)))
		{
			str[i] = str[i] - 32 ;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main(void)
{
	char str[] ="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("le %s",ft_strcapitalize(str));
	return 0;
}*/