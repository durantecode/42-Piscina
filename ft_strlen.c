/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 12:10:08 by irueda-g          #+#    #+#             */
/*   Updated: 2021/03/16 16:37:00 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int u;
	int n;

	u = 0;
	n = 0;
	while (str[u] != '\0')
	{
		n++;
		u++;
	}
	return (n);
	return (0);
}

int		main(void)
{
	int z;

	printf("%d\n", ft_strlen("hola"));
}