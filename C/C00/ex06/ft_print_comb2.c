/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:54:53 by gissao-m          #+#    #+#             */
/*   Updated: 2022/04/14 00:39:43 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_putchar('0' + (f / 10));
			ft_putchar('0' + (f % 10));
			write(1, " ", 1);
			ft_putchar('0' + (s / 10));
			ft_putchar('0' + (s % 10));
			if (f != 98)
				write (1, ", ", 2);
			s++;
		}
		f++;
	}
}

int main (void)
{
	ft_print_comb2();
	return(0);
}