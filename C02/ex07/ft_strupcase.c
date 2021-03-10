/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 19:26:15 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/10 11:29:34 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x]= str [x] - 32;
		}
		x++;
	}
	x = 0;
	while (str[x] != '\0')
	{
		printf("%c", str[x]);
		x++;
	}
	return (str);
}

int		main()
{	
	char	a[] = "abcdfgsert";
	ft_strupcase(&a[0]);
}

