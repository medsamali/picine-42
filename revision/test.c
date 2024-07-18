/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:41:32 by  msamaali         #+#    #+#             */
/*   Updated: 2024/07/18 17:38:13 by  msamaali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void put_char(char c)
{
	write(1, &c, 1);
}
int check(char c, char *str)
{
	int i;
	while(str[i] == c )
	{
		return (1);
	}
	return (0);
}
int main(int argc, char **argv)
{
	int i;
	i = 0;
	char * str;
	str = argv[1];
	char * str2;
	str2 = argv[1];
	if(argc == 3)
	(
		while(argv[1][i])
		{
			if(check())
		}
	)
}