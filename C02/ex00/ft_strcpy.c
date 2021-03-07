/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:17:21 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/06 16:20:28 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*pointer;

	pointer = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (pointer);
}

int		main(int argc, char **argv)
{
	//char	src[] = "Hola";

    char	dest[4];
    if (argc == 2)
    printf("%s", ft_strcpy(dest, argv[1]));
}
