/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:52:45 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/18 21:26:59 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int *)malloc(max - min);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

int		main(void)
{
	int		*ptr;

	ptr = ft_range(1, 6);
	//write(1, &ptr[3], 4);
	printf("%d", ptr[3]);
}