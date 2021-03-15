/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 07:50:36 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/15 21:14:31 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int	sq;

	sq = 0;
	if (nb <= 0)
		return (0);
	while (sq * sq < nb && sq <= 46340)
		sq++;
	if (sq * sq == nb)
		return (sq);
	else
		return (0);
}

int		main(void)
{
	printf("%d\n", ft_sqrt(2147483647));
}
