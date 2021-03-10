/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:24:19 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/10 11:10:53 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (str[x] != '\0')
	{
		if (str[x] >= 32 || str[x] == 127)
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
	int print;
	int notprint;

	empty = ft_str_is_printable("");
	print = ft_str_is_printable("asdASD3!#$()+*/{}_^~f=:;<>[]");

	notprint = ft_str_is_printable("\x1\x2\x3\x4");

	printf("Cadena vacía debe ser 1: %d\n", empty);
	printf("Cadena printable debe ser 1: %d\n", print);
	printf("Cadena not print debe retornar 0: %d\n", notprint);
}
