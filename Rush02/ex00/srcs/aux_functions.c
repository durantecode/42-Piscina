/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:23:31 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/14 20:16:15 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushlib.h"

int		ft_amount(int n)
{
	int amount;

	amount = 0;
	if (n % 3 == 0)
		amount = 28;
	else if (n == 4)
		amount = 29;
	else if (n % 7 == 0)
		amount = 30;
	else if (n % 10 == 0)
		amount = 31;
	else if (n == 1)
		amount = -1;
	else if ((n == 2) || (n == 5) || (n == 8))
		amount = -1;
	return (amount);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_char_to_number(char c)
{
	int	num;

	num = c - '0';
	return (num);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diferencia;

	i = 0;
	diferencia = s1[i] - s2[i];
	while ((s1[i] != '\0') && s2[i] != '\0')
	{
		if (diferencia != 0)
			return (diferencia);
		i++;
		diferencia = s1[i] - s2[i];
	}
	return (diferencia);
}

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
