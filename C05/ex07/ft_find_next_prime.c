/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 08:58:00 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/16 20:57:28 by ldurante         ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

int		main(void)
{
	printf("%d\n", ft_find_next_prime(2147483644));
}
