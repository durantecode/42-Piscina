/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 11:45:27 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/13 12:19:51 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int i;

	i = 1;
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb - 1, power));
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_recursive_power(5, 5));
}