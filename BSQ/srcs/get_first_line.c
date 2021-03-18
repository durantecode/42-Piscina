/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_first_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:19:10 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/18 18:55:04 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsqlib.h"

void	get_first_line(char *get_map, int g_chars_first_line)
{
	g_chips = (char *)malloc(3);
	g_chips[2] = get_map[g_chars_first_line - 1];
	g_chips[1] = get_map[g_chars_first_line - 2];
	g_chips[0] = get_map[g_chars_first_line - 3];
}
