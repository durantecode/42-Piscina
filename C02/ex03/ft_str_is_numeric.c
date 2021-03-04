/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:13:37 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/04 17:40:22 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (str[x] != '\0')
	{
		if (str[x] >= '0' && str[x] <= '9')
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
	int numbers;
	int characters;

	empty = ft_str_is_numeric("");
	numbers = ft_str_is_numeric("34534536");
	characters = ft_str_is_numeric("vgfdkfds_-´ç24e-");

	printf("Cadena vacía debe ser 1: %d\n", empty);
	printf("Cadena numérica debe ser 1: %d\n", numbers);
	printf("Cadena con caracteres debe retornar 0: %d\n", characters);
}
