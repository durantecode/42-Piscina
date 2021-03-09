/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 17:48:18 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/09 20:34:19 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length - 1);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int buffer;
	unsigned int n;
    int x;
	int y;

    x = 0;
	y = 0;
    buffer = size - ft_strlen(dest) - 1;
	printf("%d\n", buffer);
	while (dest[x] != '\0')
	{
		x++;
	}
   	while (y <= buffer)
   	{
       	dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
    x = 0;
    while (dest[x])
    {
        x++;
    }
    printf("dest: %s\n", dest);
    return (x);
}

int     main(void)
{
    char dest[10] = "hola mundo";
    char src[] = "12345";

    printf("longitud de src: %d\n", ft_strlcat(dest, src, 10));
//	printf("%lu\n", strlcat(dest, src, 10));
    return (0);
}
