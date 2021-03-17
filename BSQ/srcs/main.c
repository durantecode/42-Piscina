/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 12:31:41 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/16 12:51:51 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsqlib.h"

int		main(int argc, char **argv)
{
	char	*map;

	if (argc > 1)
	{
		map = open_map(argv[1]);
		printf("%s\n", map);
	}
	return (0);
	
}