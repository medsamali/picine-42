/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:01:56 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/09 19:12:24 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i ;
	int	j ;

	i = 0;
	j = 0 ;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j])
				j++;
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
