/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:47:28 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/18 21:38:47 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsqlib.h"

int		g_bytes_count;
int		g_rows;
int		g_chars_first_line;
int		g_columns;

void	get_byte_count(int fd)
{
	char	map[1];
	int		l;

	l = 0;
	g_bytes_count = 0;
	g_rows = 1;
	g_chars_first_line = 0;
	g_columns = 0;
	while ((read(fd, &map, 1)) > 0)
	{
		g_bytes_count++;
		if (map[0] == '\n')
		{
			g_rows++;
			l++;
		}
		if (map[0] != '\n' && l == 0)
			g_chars_first_line++;
		if (map[0] != '\n' && l == 1)
			g_columns++;
	}
	g_rows -= 2;
}

void	get_map(char *file_name)
{
	int		fd;
	char	*get_map;
	size_t	size;

	fd = open(file_name, O_RDONLY);
	if (fd == -1 || (file_name == '\0'))
		ft_check_error(1);
	get_byte_count(fd);
	close(fd);
	fd = open(file_name, O_RDONLY);
	get_map = (char *)malloc(g_bytes_count);
	size = read(fd, get_map, g_bytes_count);
	get_map[size] = '\0';
	if (!(get_map))
		get_map = NULL;
	get_first_line(get_map, g_chars_first_line);
	get_full_array(get_map, g_columns, g_rows, g_chars_first_line);
	free(get_map);
	close(fd);
	ft_print_sqr(g_rows, g_columns);
	ft_create_ultimate();
}

void	ft_create_ultimate(void)
{
	char	*pos;
	int		x;
	int		i;
	int		j;
	int		k;
	int		l;
	int		max;

	pos = ft_find_max(g_rows, g_columns);
	x = pos[0] - 48;
	max = pos[1] - 48;
	i = square_b[x] - 48;
	j = square_h[x] - 48;
	k = i;
	l = j;
	while (k <= i + max - 1 && k <= g_rows)
	{
		while (l <= j + max - 1 && l <= g_columns)
			g_array_map[k][l++] = g_chips[2];
		l = j;
		k++;
	}
	ft_print_array(g_rows, g_columns);
}

void	ft_print_array(int row, int column)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < row)
	{
		while (j < column)
		{
			write(1, &g_array_map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
