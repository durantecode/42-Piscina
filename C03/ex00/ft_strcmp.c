/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:27:21 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/11 10:29:30 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(void)
{
	char h[] = "azb";
	char p[] = "aac";
	int x = ft_strcmp("azb", "aac");
	int z = strcmp(h, p);

	printf("%d\n", x);
	printf("%d\n", z);

}
