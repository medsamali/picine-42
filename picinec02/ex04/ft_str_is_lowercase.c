/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:36:29 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/01 17:41:41 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		n;
	int		flag;

	i = 0;
	flag = 1;
	if (str[i] == '\0')
	{
		n = 1 ;
	}
	while (str[i] && flag == 1)
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			n = 1;
		}
		else
		{
			n = 0;
			flag = 0;
		}
		i++;
	}
	return (n);
}
