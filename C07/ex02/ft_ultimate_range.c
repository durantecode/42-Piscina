/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:53:58 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/17 15:01:15 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int		*ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	range = (int *)malloc(max - min);
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	range[i] = '\0';
	return (range);
}

int		main(void)
{
	printf("%d", ft_range(1, 2)[1]);
}