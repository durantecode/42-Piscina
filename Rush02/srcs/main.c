/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:37:47 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/14 16:42:32 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushlib.h"

int		main(int argc, char **argv)
{
	int num_entry;
	char *dict;
	char *num_letter;

	num_entry = ft_atoi(argv[1]);
	dict = open_dict();
	get_dict(dict);
	num_letter = ft_search_position(num_entry);
	if (argc == 2)
	{
		printf("%s\n", num_letter);
	}
   	return (0);
}