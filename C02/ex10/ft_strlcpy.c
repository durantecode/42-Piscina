/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 08:18:08 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/08 09:52:58 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int x;
	int buffer;

	x = 0;
	buffer = size - 1;
	if (size > 0)
	{
		while (buffer > 0 && src[x] != '\0')
		{
			dest[x] = src[x];
			buffer--;
			x++;
		}
	}
	else
	{
		dest[x] = '\0';
	}
	x = 0;
	while (src[x])
	{
		x++;
	}
	printf("dest: %s\n", dest);
	return (x);
}

int		main(void)
{
	char dest[6];
	char src[] = "HolaMundo";

	printf("src: %s\n", src);
	printf("longitud de src: %d\n", ft_strlcpy(dest, src, 3));
	return (0);
}
