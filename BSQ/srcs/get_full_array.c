/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_full_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:20:02 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/18 21:34:34 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsqlib.h"

void	get_full_array(char *get_map, int column, int row, int first_line)
{
	int		i;
	int		j;
	int		k;
	char	*ptr;

	i = 0;
	j = 0;
	k = 0;
	g_array_map = (char **)malloc(row);
	while (i < row)
	{
		g_array_map[i] = (char *)malloc(column);
		i++;
	}
	i = first_line + 1;
	while (get_map[i] != '\0')
	{
		ptr = (char *)malloc(column);
		while (get_map[i] != '\n')
			ptr[k++] = get_map[i++];
		g_array_map[j++] = ptr;
		k = 0;
		i++;
	}
	free(ptr);
}
