/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:29:58 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/14 20:55:38 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushlib.h"

int		ft_check_number(char *str)
{
	int		i;
	int		str_long;

	i = 0;
	str_long = ft_strlen(str);
	if ((str_long > 10) ||
	((str_long == 10) && (ft_strcmp("4294967295", str) < 0)))
	{
		ft_check_error(0);
		return (0);
	}
	else
	{
		while (str[i] != '\0')
		{
			if ((str[i] < '0') || (str[i] > '9'))
			{
				ft_check_error(2);
				return (0);
			}
			i++;
		}
	}
	return (1);
}
