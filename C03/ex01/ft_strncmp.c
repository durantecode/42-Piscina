/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 20:05:33 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/08 21:33:04 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == 0)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

int 	main(void)
{
	int z = ft_strncmp("zzxzz", "zzdzz", 3);
	int x = strncmp("zzzz", "zzzz", 3);

	printf("%d\n", z);
	printf("%d\n", x);
}
