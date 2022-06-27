/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:30:40 by giccao-m          #+#    #+#             */
/*   Updated: 2022/04/23 04:35:35 by gissao-m         ###   ########.fr       */
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
		n_arg = 1;
		while (n_arg < argc)
		{
			i = 0;
			while (argv[n_arg][i])
				ft_putchar(argv[n_arg][i++]);
			ft_putchar('\n');
			n_arg++;
		}
	}
	return (0);
}
