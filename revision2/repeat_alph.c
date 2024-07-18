/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:41:32 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/18 20:22:00 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void put_char(char c)
{
	write(1, &c, 1);
}
int main(int ac, char **argv)
{
	int i = 0;
	int repeat = 0;
	char *str;
	str = argv[1];
	if (ac == 2)
	{
		while(argv[1][i])
		{
			repeat = 1;
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				repeat = repeat + argv[1][i] - 'a';
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				repeat = repeat + argv[1][i] - 'A';
			while(repeat)
			{
				put_char(str[i]);
				repeat--;
			}
			i++;
		}
		
	}
	return 0;
}
