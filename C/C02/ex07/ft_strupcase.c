/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 03:40:50 by gissao-m          #+#    #+#             */
/*   Updated: 2022/04/20 03:38:56 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)

{
	int	count_size;

	count_size = 0;
	while (str[count_size] != '\0')
	{
		if (str[count_size] >= 97 && str[count_size] <= 122)
		{
			str[count_size] = str[count_size] - 32;
			count_size++;
		}
		else
			count_size++;
	}
	return (str);
}
