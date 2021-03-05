/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:42:54 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/05 14:09:48 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int x;

	x = 0;	
	if (str[x] >= 'a' && str[x] <= 'z')
		str[x] = str[x] - 32;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z' && str[x - 1]  >= 32 && str[x - 1] <= 47)
			{
				str[x] = str[x] - 32;
			}
		x++;
	}
	return (str);
}

int		main(void)
{
	char arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(arr));
}

