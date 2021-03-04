/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:41:22 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/04 18:16:19 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
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
	int upper;
	int notupper;

	empty = ft_str_is_uppercase("");
	upper = ft_str_is_uppercase("ASDGKRLW");
	notupper = ft_str_is_uppercase("vgfdFFS123ç24e-");

	printf("Cadena vacía debe ser 1: %d\n", empty);
	printf("Cadena uppercase debe ser 1: %d\n", upper);
	printf("Cadena not uppercase debe retornar 0: %d\n", notupper);
}
