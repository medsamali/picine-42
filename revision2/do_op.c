/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:41:15 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/17 14:37:02 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '*')
			printf("%d",atoi(argv[1]) * atoi(argv[3]));
		if (argv[2][0] == '+')
			printf("%d",atoi(argv[1]) + atoi(argv[3]));	
	}
	write(1, "\n", 1);
}
