/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:20:26 by gissao-m          #+#    #+#             */
/*   Updated: 2022/04/19 23:35:07 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count_size;

	count_size = 0;
	while (src[count_size] != '\0')
	{
		dest[count_size] = src[count_size];
		count_size++;
	}	
	dest[count_size] = '\0';
	return (dest);
}
