/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:48:23 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/16 19:09:39 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destsize;
	unsigned int	srcsize;
	unsigned int	i;

	destsize = 0;
	srcsize = 0;
	i = 0;
	while (dest[destsize] != '\0')
		destsize++;
	while (src[srcsize] != '\0')
		srcsize++;
	if (size < destsize)
		srcsize = srcsize + size;
	else
		srcsize = srcsize + destsize;
	while (src[i] != '\0' && size - destsize - 1)
	{
		dest[destsize] = src[i];
		destsize++;
		i++;
	}
	dest[destsize] = '\0';
	return (srcsize);
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
