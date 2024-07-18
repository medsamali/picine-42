/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_u.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:01:12 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/16 13:41:12 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// dans le cas ou on affiche u dans toutes les cas meme dans exam si arg != 1 ...
#include <unistd.h>
int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
		{write(1, "u\n", 2);
			return (0);
		}
	while (argv[1][i])
	{
		if (argv[1][i] =='u')
			{write(1, "u\n", 2);
			 return 0;
			}
		i++;
	}
		write(1, "u\n", 2);
		return (0);
}
int main(void)
{
	write(1, "i\n",2);
	return (0);
}
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	write(1, "i\n",2);
	return (0);
}
/*
le cas ou dans le mot il y a pas de u
int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
		{write(1, "u", 1);
			return (0);
		}
	while (argv[1][i])
	{
		if (argv[1][i] =='u')
			{write(1, "u", 1);
			 return 0;
			}
		i++;
	}
		write(1, "\n", 1);
		return (0);
}
*/
