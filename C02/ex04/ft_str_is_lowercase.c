/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:41:22 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/04 18:11:57 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			y = 1;
		else
			return (0);
		x++;
	}
	return (y);
}

int		main(void)
{
	int empty;
	int lower;
	int notlower;

	empty = ft_str_is_lowercase("");
	lower = ft_str_is_lowercase("afdgfdg");
	notlower = ft_str_is_lowercase("vgfdFFS123ç24e-");

	printf("Cadena vacía debe ser 1: %d\n", empty);
	printf("Cadena lowercase debe ser 1: %d\n", lower);
	printf("Cadena not lowercase debe retornar 0: %d\n", notlower);
}
