/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:52:18 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/14 20:53:03 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushlib.h"

char	*open_dict(void)
{
	unsigned int	count_dict;
	unsigned int	size;
	int				fd;
	char			*dict;

	dict = (char *)malloc(512);
	count_dict = 512;
	fd = open("numbers.dict", O_RDONLY);
	size = read(fd, dict, count_dict);
	dict[size] = '\0';
	if (fd == -1)
		ft_check_error(-1);
	else if (count_dict == 0)
		ft_check_error(0);
	close(fd);
	return (dict);
}
