/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:25:17 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/01 17:35:32 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
		if ((str[i] >= '0' && str[i] <= '9'))
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
