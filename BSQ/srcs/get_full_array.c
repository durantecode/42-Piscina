/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_full_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:20:02 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/17 20:38:39 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsqlib.h"

void	get_full_array(char *get_map)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (get_map[i] != '\0')
	{
		if (get_map[i] == '\n')
		{
			i++;
			while (get_map[i] != '\n')
			{
				g_array_map[j][k] = get_map[i];
				k++;
				i++;
			}
			j++;
		}
		i++;
		k = 0;
	}
}