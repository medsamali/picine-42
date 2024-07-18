/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:42:25 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/01 17:46:19 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
		if ((str[i] >= 'A' && str[i] <= 'Z'))
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
