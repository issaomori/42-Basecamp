/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:02:33 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/17 02:51:52 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//global variables
/*static char	*set_values_on_tb(int argc, char *argv)
{
	char	(*coordinate[5]) = malloc(255 * sizeof(*coordinate));
	int			set_value;
	int			y;

	while (set_value <= 4)
	{
		coordinate[1][set_value] = argv[set_value];
		coordinate[set_value][0] = argv[set_value + 4];
		coordinate[set_value][5] = argv[set_value + 8];
		coordinate[4][set_value] = argv[set_value + 12];
		set_value++;
	}
	return (*coordinate[5]);
}*/

int	main(int argc, char *argv[])
{
	//char	coordinate[5][5];
	//int	table[5][5];
	char new_line;
	char show;
	show = 'c';
	//char show2;
	//argc = 1;
	new_line ='\n';
	while (argc <= 16)
	{
		//char* x;
		//char a = *x;
		//*show = argv[argc];
		//show2 = show;
		write(1, argv[argc], 1);
		write(1, &show, 1);
		if (argc % 4 == 0)
		{
			ft_putchar(new_line);
		}
		argc++;
	}
	//table = set_values_on_tb(argc, *argv);
}
