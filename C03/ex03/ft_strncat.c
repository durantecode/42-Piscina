/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 10:32:06 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/09 11:56:08 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int n;
	int x;
	int y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (y <= nb)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

int		main(void)
{
	char	array1[14] = "hola ";
	char	array2[7] = "12345";
	printf("%s\n", ft_strncat(array1, array2, 4));
//	printf("%s\n", strncat(array1, array2, 4));
}
			
