/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:21:01 by gissao-m          #+#    #+#             */
/*   Updated: 2022/04/09 19:21:04 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	validate_field(int width, int height, int x, int y);

void	rush(int x, int y)
{
	int	width;
	int	height;

	height = 1;
	while (height <= y)
	{
		width = 1;
		while (width <= x)
		{
			if ((height > 1 && height < y) && (width > 1 && width < x))
				ft_putchar(' ');
			else if ((height > 1 && height < y) && (width == 1 || width == x))
				ft_putchar('*');
			else if ((width > 1 && width < x) && (height == 1 || height == y))
				ft_putchar('*');
			else
				validate_field(width, height, x, y);
			width++;
		}
		ft_putchar('\n');
		height++;
	}
}

void	validate_field(int width, int height, int x, int y)
{
	if (height == 1 && width == x)
		ft_putchar('\\');
	if (width == 1 && height == y)
		ft_putchar('\\');
	if (width == x && height == y)
		ft_putchar('/');
	if (height == 1 && width == 1)
		ft_putchar('/');
}
