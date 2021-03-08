/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:27:21 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/08 20:56:58 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;	
	}
	if (*s1 == *s2)
		return (0);
	if ((*s1 - *s2) < 0)
		return (-1);
	if ((*s1 - *s2) > 0)
		return (1);
	return (0);
}

int		main(void)
{
	int x = ft_strcmp("qwertyasdfgh", "234FDSVCXvfsdi");
	int z = strcmp("aaa", "zzz");
	printf("%d\n", x);
	printf("%d\n", z);
}
