/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:47:28 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/15 18:50:29 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushlib.h"

char	*open_dict(void)
{
	unsigned int	count_map;
	unsigned int	size;
	int				fd;
	char			*map;

	map = (char *)malloc(512);
	count_map = 512;
	fd = open("map.pl", O_RDONLY);
	size = read(fd, map, count_map);
	map[size] = '\0';
	if (fd == -1)
		ft_check_error(-1);
	else if (count_map == 0)
		ft_check_error(0);
	close(fd);
	return (map);
}