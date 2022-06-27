/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:59:32 by gissao-m          #+#    #+#             */
/*   Updated: 2022/04/19 01:39:20 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		aux++;
	}
	aux++;
	return (aux);
}