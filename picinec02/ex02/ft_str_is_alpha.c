/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:06:05 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/07 13:08:13 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if ((str[i] >= 'a' && str[i] <= 'z') \
		|| (str[i] >= 'A' && str[i] <= 'Z'))
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
