/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 08:18:08 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/10 15:37:42 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int buffer;

	x = 0;
	buffer = 0;
	while (src[x] != '\0')
		x++;
	buffer = x;
	x = 0;
	if (size != 0)
	{
		while (x < size)
		{
			if (x == size - 1)
				dest[x] = 0;
			else
				dest[x] = src[x];
			x++;
		}
	}
	printf("%s\n", dest);
	return (buffer);
}

int		main(void)
{
	char dest[10];
	char src[] = "Ho6yt543trtete";
	
	printf("%lu\n", strlcpy(dest, src, 8)); 
	printf("src: %s\n", src);
	printf("longitud de src: %d\n", ft_strlcpy(dest, src, 8));
	return (0);
}
