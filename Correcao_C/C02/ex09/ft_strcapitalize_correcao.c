/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_correcao.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:51:14 by gissao-m          #+#    #+#             */
/*   Updated: 2022/04/19 20:08:06 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main (void)
{
	char str[56] = {"oi, tudo bem? 42paLavras Quarenta-e-duas; cinquenta+e+um"};
	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}

// +1 pq precisa por maiuscula na proxima casa)