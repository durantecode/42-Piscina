/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:57:03 by mbueno-g          #+#    #+#             */
/*   Updated: 2021/03/18 21:34:14 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsqlib.h"

char	*ft_find_max(int row, int column)
{
	char	*pos;
	int		i;
	int		max;
	int		size;
	int		x;

	size = ft_count_free_pos(row, column);
	i = 1;
	x = 0;
	max = square[0] - '0';
	while (i < size - 1)
	{
		if (max < square[i + 1] - '0')
		{
			max = square[i + 1] - '0';
			x = i + 1;
		}
		i++;
	}
	pos = (char *)malloc(2);
	pos[0] = x + 48;
	pos[1] = max + 48;
	return (pos);
}
