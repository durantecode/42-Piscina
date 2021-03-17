/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:59:50 by ymartin-          #+#    #+#             */
/*   Updated: 2021/03/16 16:21:48 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				t;

	t = 0;
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[t] = src[i];
		i++;
		t++;
	}
	dest[t - 1] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		main(void)
{
//	char dest[10] = "hola";
//	char src[] = "Hoete";
	
//	printf("%lu\n", strlcpy(dest, src, 8)); 
//	printf("src: %s\n", src);
	printf("longitud de src: %d\n", ft_strlcpy("HOLA", "ADIOS", 20));
	return (0);
}
