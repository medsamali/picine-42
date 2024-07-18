/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:53:23 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/13 15:58:32 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int c, char *argv[])
{
	int	i;

	i = 0;
	(void) c;
	while (argv[0][i])
	{
		i++;
	}
	write(1, argv[0], i);
	write(1, "\n", 1);
	return (0);
}
