/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:16:07 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/09 19:11:21 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lenth(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				j;
	int				lenthstr;
	unsigned int	lenthdest;

	i = 0;
	j = 0;
	lenthstr = ft_lenth(src);
	lenthdest = ft_lenth(dest);
	if (size == 0)
		return (lenthstr);
	if (size < 1)
		return (lenthstr);
	while (src[i] && size - 1 > lenthdest)
	{
		dest[lenthdest] = src[i];
		i++;
		lenthdest++;
	}
	dest[lenthdest] = '\0';
	if (size > lenthdest)
		return (lenthstr + lenthdest);
	return (size + lenthstr);
}
