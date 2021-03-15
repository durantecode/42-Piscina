/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:32:01 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/14 21:42:26 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushlib.h"

void	ft_split_number(int value, int amount)
{
	char	*s1;
	char	*s2;

	s1 = ft_search_position(value);
	ft_putstr(s1);
	ft_putchar(' ');
	if (amount >= 28 && amount <= 31)
	{
		s2 = ft_search_position(amount);
		ft_putstr(s2);
		ft_putchar(' ');
	}
}
