/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:03:00 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/09 17:22:54 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;
		
	x = 0;
	if (*to_find == '\0')
		return (str);
	while (str[x] != '\0')
	{
		y = 0;
		while (to_find[y] == str[x + y])
		{
			if (to_find[y + 1] == '\0')
			{
				return (str + x);
			}
			y++;
		}
		x++;
	}
	return (0);
}

int		main(void)
{
	char	*largestring = "Foo Bir Baz";
	char	*smallstring = "Bar";
	printf("%s\n", ft_strstr(largestring, smallstring));
//	printf("%s\n", strstr(largestring, smallstring));
}	
