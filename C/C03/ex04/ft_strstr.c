/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:56:12 by gissao-m          #+#    #+#             */
/*   Updated: 2022/04/21 23:00:50 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	needle;
	int	to_find_size;

	to_find_size = ft_strlen(to_find);
	if (to_find_size == 0)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		needle = 0;
		while (str[i + needle] == to_find[needle])
		{
		needle++;
			if (needle == to_find_size)
				return (&str[i]);
		}
		i++;
	}
	return ('\0');
}
