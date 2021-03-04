/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:22:33 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/04 17:13:07 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z') 
			y = 1;
		else if (str[x] >= 'a' && str[x] <= 'z')
			y = 1;
		else
			return (0);
		x++;
	}
	return (y);
}

int main (void)
{
	int empty;
	int alpha;
	int characters;

	empty = ft_str_is_alpha("");
	alpha = ft_str_is_alpha("characAZdvadQAZfHRs");
	characters = ft_str_is_alpha("a.-!sdf!_");

	printf("Cadena vacía debe ser 1: %d\n", empty);
	printf("Cadena alfanumérica debe ser 1: %d\n", alpha);
	printf("Cadena con caracteres debe retornar 0: %d\n", characters);
}
