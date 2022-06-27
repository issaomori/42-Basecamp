/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:49:16 by gissao-m          #+#    #+#             */
/*   Updated: 2022/04/13 18:03:05 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	numbers(char f, char s, char t)
{
	ft_putchar(f);
	ft_putchar(s);
	ft_putchar(t);
}

void	spc_cma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0';
	while (f <= '9')
	{
		s = f + 1;
		while (s <= '9')
		{
			t = s + 1;
			while (t <= '9')
			{
				numbers(f, s, t);
				if (!(f == '7' && s == '8' && t == '9'))
				{
					spc_cma();
				}
				t++;
			}
			s++;
		}
		f++;
	}
}
