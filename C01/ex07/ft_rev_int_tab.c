/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:48:08 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/04 12:14:36 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}
