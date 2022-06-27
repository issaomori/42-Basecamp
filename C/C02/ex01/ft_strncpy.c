/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:21:18 by gissao-m          #+#    #+#             */
/*   Updated: 2022/04/20 17:51:05 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count_size;

	count_size = 0;
	while ((src[count_size]) != '\0' && (count_size < n))
	{
		dest[count_size] = src[count_size];
		count_size++;
	}
	while (count_size < n)
	{
		dest[count_size] = '\0';
		count_size++;
	}
	return (dest);
}
