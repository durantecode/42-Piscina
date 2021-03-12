/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 17:48:18 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/11 17:38:01 by ldurante         ###   ########.fr       */
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
	return (length);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int offset;
    unsigned int dest_len;
	unsigned int src_len;

    dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	offset = dest_len;
	if (src_len == 0 && size == 0)
		return (0);
	else if (offset > size -1)
		return (src_len + size);
	while ((*src != '\0') && (offset < size - 1) && (size != 0))
	{
		*(dest + offset) = *src;
		offset++;
		src++;
	}
	*(dest + offset) = '\0';
	return (dest_len + src_len);
}

int     main(void)
{
    char dest[200] = "JzqDxbKLVXBJWukmHPVPHoUhy ";
    char src[] = "EOYAByAIFCKtLlxNCkMYPJWQDgTKtdSlniZPiD";

	printf("longitud función mía: %d\n", ft_strlcat(dest, src, 8));
	printf("longitud función original: %lu\n", strlcat(dest, src, 8));
	printf("%s\n", dest);
    return (0);
}
