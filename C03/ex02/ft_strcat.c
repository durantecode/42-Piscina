/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 09:40:18 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/09 10:30:26 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int x;
	int y;
	
	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
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
	printf("%s\n", ft_strcat(array1, array2));
//	printf("%s\n", strcat(array1, array2));

}
