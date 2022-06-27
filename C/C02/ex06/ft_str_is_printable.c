/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 03:33:03 by gissao-m          #+#    #+#             */
/*   Updated: 2022/04/19 19:56:35 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)

{
	int	count_size;
	int	verificator;

	count_size = 0;
	verificator = 0;
	if (str[count_size] == '\0')
	{
		return (1);
	}
	while (str[count_size] != '\0')
	{
		if (str[count_size] >= 32 && str[count_size] <= 126)
		{
			verificator = 1;
			count_size++;
		}
		else
			return (0);
	}
	return (verificator);
}
