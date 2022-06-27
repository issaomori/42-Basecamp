/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:56:05 by gissao-m          #+#    #+#             */
/*   Updated: 2022/04/19 19:51:46 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)

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
		if (str[count_size] >= 48 && str[count_size] <= 57)
		{
			verificator = 1;
			count_size++;
		}
		else
			return (0);
	}
	return (verificator);
}
