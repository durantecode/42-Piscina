/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:21:04 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/03 21:04:02 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int x;
	int y;
	int swap;

	x = 0;
	while (x < size)
	{
		y = x + 1;
		while (y < size)
		{
			if (tab[y] < tab[x])
			{
				swap = tab[x];
				tab[x] = tab[y];
				tab[y] = swap;
			}
			y++;
		}
		x++;
	}
	y = 0;
	while (y < size)
	{
		printf("%d", y);
		y++;
	}
}

int		main(void)
{
	int array[11] = {6, 3, 4, 5, 4, 8, 9, 3, 5, 7, 2};
	int size = 11;

	ft_sort_int_tab(&array[0], size);
}
