/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 07:52:54 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/15 12:59:41 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int prime;

	prime = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (prime <= nb / prime)
	{
		if (nb % prime == 0)
			return (0);
		prime++;
	}
	return (1);
}

int		main(void)
{
	printf("%d\n", ft_is_prime(-7));
}
