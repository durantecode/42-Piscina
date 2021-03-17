/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:47:28 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/17 21:17:27 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsqlib.h"

int		g_bytes_count;
int		g_rows;

void	get_byte_count(int fd)
{
	char	map[1];

	g_bytes_count = 1;
	g_rows = 1;
	while ((read(fd, &map, 1)) > 0)
	{
		g_bytes_count++;
		if (map[0] == '\n')
		{
			g_rows++;
		}
	}
	g_rows -= 2;
	printf("HOLA");
//	printf("bytes_count %d\n", g_bytes_count);
//	printf("rows %d\n", g_rows);
}

void	get_map(char *file_name)
{
	int		fd;
	char	*get_map;
	fd = open(file_name, O_RDONLY);
	if (fd == -1 || (file_name == '\0'))
		ft_check_error(1);
	get_byte_count(fd);
	get_map = (char *)malloc(g_bytes_count);
	read(fd, get_map, g_bytes_count - 5);
	if (!(get_map))
		get_map = NULL;
	get_first_line(get_map);
	get_full_array(get_map);
	free(get_map);
	close(fd);
}