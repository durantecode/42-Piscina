/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parameters_to_find.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:57:54 by icastell          #+#    #+#             */
/*   Updated: 2021/03/14 21:59:57 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushlib.h"

void	ft_parameters_to_find(char *str)
{
	int		i;
	int		size;
	int		amount;
	int		value;

	i = 0;
	size = ft_strlen(str);
	while (str[i] != '\0')
	{
		if (str[i] != '0')
		{
			amount = ft_amount(size - i);
			value = ft_char_to_number(str[i]);
			if ((value != 0) && (size - i != 1))
			{
				if (((size - i) == 2) || ((size - i) == 5) || ((size - i) == 8))
				{
					if (value == 1)
					{
						value = 10 + ft_char_to_number(str[i + 1]);
						i++;
						if (((size - i) == 5) || ((size - i) == 8))
							amount = 29;
					}
					else
						value = (value - 2) + 20;
				}
			}
			ft_split_number(value, amount);
			i++;
		}
		else
			i++;
	}
}
