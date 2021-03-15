/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:37:47 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/14 21:52:57 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushlib.h"

int		main(int argc, char **argv)
{
	char *dict;

	if ((argc != 2) && (argc != 3))
	{
		ft_check_error(1);
		return (0);
	}
	if ((argc == 2) || (argc == 3))
	{
		if (ft_check_number(argv[argc - 1]) == 0)
		{
			return (0);
		}
	}
	dict = open_dict();
	get_dict(dict);
	if (argv[1][0] == '0' && ft_strlen(argv[1]) == 1)
		write(1, "zero", 5);
	ft_parameters_to_find(argv[argc - 1]);
	ft_putchar('\n');
	free(dict);
	return (0);
}
