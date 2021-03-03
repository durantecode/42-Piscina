/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:48:08 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/03 20:39:22 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int y;
	int swap;

	x = 0;
	y = size - 1;
	while (x < (size / 2))
	{
		swap = tab[x];
		tab[x] = tab[y];
		tab[y] = swap;
		x++;
		y--;
	}
	y = 0;
	while (y < size)
	{
		printf("%d", tab[y]);
		y++;
	}
}

int		main(void)
{
	int array[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int size = 9;

	ft_rev_int_tab(&array[0], size);
}
