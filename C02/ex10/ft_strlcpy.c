/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 08:18:08 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/06 16:19:46 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int x;
	int y;
	int buffer;
	
	x = 0;
	y = 0;
	while (size > 1 && (dest[x] = src[x]) != 0)
	{
		dest[x] = src[x];
		size--;
		x++;
	}
	dest[x] = '\0';
	x = 0;
	while (src[x])
	{
		x++;
	}

	return (x);
}

int		main(void)
{


