/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:53:55 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/18 21:08:16 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		x;
	int		y;
	int		z;

	x = 0;
	z = 0;
	ptr = malloc(sizeof(strs) + sizeof(sep));
	while (x < size)
	{
		y = 0;
		while (strs[x][y] != '\0')
			ptr[z++] = strs[x][y++];
		y = 0;
		while (sep[y] != '\0' && x < size - 1)
			ptr[z++] = sep[y++];
		x++;
	}
	ptr[z] = '\0';
	return (ptr);
}

int		main(void)
{
	char	*strs[6];

	strs[0] = "hola";
	strs[1] = "adios";
	strs[2] = "hola";
	strs[3] = "adios";
	strs[4] = "hola";
	strs[5] = "adios";
	printf("%s\n", ft_strjoin(5, strs, "++"));
}