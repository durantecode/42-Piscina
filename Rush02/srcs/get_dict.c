/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 13:04:13 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/14 13:55:28 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushlib.h"

void	get_dict(char *dict_parse)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while(dict_parse[i] != '\0')
	{
		if (dict_parse[i] == ':')
		{
			i += 2;
			while (dict_parse[i] != '\n')
			{
				g_array_letter[j][k] = dict_parse[i];
				k++;
				i++;
			}
			j++;
		}
		i++;
		k = 0;
	}
}