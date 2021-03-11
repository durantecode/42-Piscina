/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 20:05:33 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/11 07:36:10 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (n != 0)
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

int		main(void)
{
	char h[] = "aaa bbb kkk";
	char p[] = "aaa zzz kkk";
	int x = ft_strncmp("aaa bbb kkk", "aaa zzz kkk", 9);
	int z = strncmp(h, p, 9);

	printf("%d\n", x);
	printf("%d\n", z);
}
