/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:27:21 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/10 19:24:36 by ldurante         ###   ########.fr       */
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
	char h[] = "aaa";
	char p[] = "zzz";
	int x = ft_strcmp("aaa", "zzz");
	int z = strcmp(h, p);
	printf("%d\n", x);
	printf("%d\n", z);

}
