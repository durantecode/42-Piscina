/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 10:38:53 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/03 11:12:06 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int x;
	int y;

	*div = a / b;
	*mod = a % b;
	x = *div;
	y = *mod;
	printf("%d\n%d\n", x, y);
}

int		main(void)
{
	int p;
	int z;

	p = 20;
	z = 50;
	ft_div_mod(20, 10, &p, &z);
}
