/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:53:58 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/18 20:06:15 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int	*ptr;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = (int *)malloc(max - min);
	if (ptr == NULL)
		return (-1);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	*range = ptr;
	return (i);
}

int		main(void)
{
	int *range;

	printf("%d", ft_ultimate_range(&range, -2147483648, 2147483647));
	//printf("%d", ft_ultimate_range(&range, 45, 12));
	//printf("%d", ft_ultimate_range(&range, -4, 12));
}