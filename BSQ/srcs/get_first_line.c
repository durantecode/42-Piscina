/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_first_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:19:10 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/17 20:52:31 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsqlib.h"

void	get_first_line(char *get_map)
{
	int	i;

	i = 0;
	while (get_map[i] != '\n')
	{
		g_first_line[i] = get_map[i];
		i++;
	}
	g_first_line[i] = '\0';
}