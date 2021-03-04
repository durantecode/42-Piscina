/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:53:08 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/04 20:55:51 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x]= str [x] + 32;
			x++;
		}
	}
	x = 0;
	while (x <= 12)
	{
		printf("%c", str[x]);
		x++;
	}
	return (str);
}

int		main()
{	
	char	a[] = "ABCDFGHJ";
	ft_strlowcase(&a[0]);
}
