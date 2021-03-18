/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sqr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:44:47 by mbueno-g          #+#    #+#             */
/*   Updated: 2021/03/18 21:41:44 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsqlib.h"

int		ft_count_free_pos(int row, int column)
{
	int i;
	int j;
	int cont;

	i = 0;
	j = 0;
	cont = 0;
	while (i < row)
	{
		while (j < column)
		{
			if (g_array_map[i][j] == g_chips[0])
				cont++;
			j++;
		}
		j = 0;
		i++;
	}
	return (cont);
}

void	ft_print_sqr(int row, int column)
{
	int		i;
	int		j;
	int		l;
	int		cont;
	int		k;
	char	*value1;
	char	*value2;
	char	*value3;

	k = 0;
	i = 0;
	j = 0;
	l = 0;
	cont = 0;
	value1 = (char *)malloc(ft_count_free_pos(row, column));
	value2 = (char *)malloc(ft_count_free_pos(row, column));
	value3 = (char *)malloc(ft_count_free_pos(row, column));
	i = 0;
	j = 0;
	while (i < row - 1)
	{
		while (j < column)
		{
			while ((i + l) < row && (j + l) < column
					&& ft_find_sqr(i, j, l) == 1
					&& g_array_map[i][j] != g_chips[1])
				l++;
			value1[k] = l + '0';
			value2[k] = i + '0';
			value3[k] = j + '0';
			j++;
			k++;
			l = 0;
		}
		j = 0;
		i++;
	}
	square = value1;
	square_b = value2;
	square_h = value3;
}
