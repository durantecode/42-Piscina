/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:47:28 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/16 18:53:58 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsqlib.h"

char	*open_map(char *file_name)
{
	unsigned int	first_bytes;
	unsigned int	map_size;
	int				fd;
	char			*map;

	//map = (char *)malloc(512);
	first_bytes = 1;
	fd = open(file_name, O_RDONLY);
	while (first_bytes != '\n')
	{
		map_size = read(fd, map, first_bytes++);
	}
	if (fd == -1)
		ft_check_error(0);
	else if (first_bytes == 0)
		ft_check_error(0);
	
	//map[size] = '\0';
	
	close(fd);
	return (map);
}