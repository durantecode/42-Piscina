/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:08:02 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/18 18:44:30 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(ft_strlen(src) + 1);
	if (!(ptr))
		return (NULL);
	else
	{
		while (src[i] != '\0')
		{
			ptr[i] = src[i];
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

int		main(void)
{
	printf("%s\n", ft_strdup("hola holita"));
	printf("%s\n", strdup("hola holita"));
}
