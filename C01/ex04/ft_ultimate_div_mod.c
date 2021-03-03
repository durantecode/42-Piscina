/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 10:54:24 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/03 11:12:04 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int x;
	int y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = x;
	printf("%d\n%d\n", x, y);
}

int		main(void)
{
	int a;
	int b;

	a = 15;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
}
