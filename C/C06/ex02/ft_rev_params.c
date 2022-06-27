/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 04:21:35 by gissao-m          #+#    #+#             */
/*   Updated: 2022/04/23 04:36:35 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	n_arg;
	int	i;

	if (argc > 1)
	{
		n_arg = argc - 1;
		while (n_arg > 0)
		{
			i = 0;
			while (argv[n_arg][i])
			{
				ft_putchar(argv[n_arg][i]);
				i++;
			}
			ft_putchar('\n');
			n_arg--;
		}
	}
	return (0);
}
