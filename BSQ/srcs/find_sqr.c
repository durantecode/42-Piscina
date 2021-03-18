/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_sqr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:52:52 by mbueno-g          #+#    #+#             */
/*   Updated: 2021/03/18 21:32:58 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsqlib.h"

int		ft_find_sqr(int i, int j, int l)
{
	if (g_array_map[i + l][j] == g_chips[1]
	|| g_array_map[i][j + l] == g_chips[1] ||
	ft_fill_sqr(i, j, l) == 0)
	{
		return (0);
	}
	return (1);
}

int		ft_fill_sqr(int i, int j, int k)
{
	int x;
	int y;

	x = i;
	y = j;
	while (x <= i + k)
	{
		while (y <= j + k)
		{
			if (g_array_map[x][y] == g_chips[1])
			{
				return (0);
			}
			y++;
		}
		y = j;
		x++;
	}
	return (1);
}
