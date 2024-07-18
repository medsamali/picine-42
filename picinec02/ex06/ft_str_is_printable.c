/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:49:39 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/01 18:07:56 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if (!((str[i] >= 0 && str[i] <= 31) || (str[i] == 127)))
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
