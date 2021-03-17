/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:05:50 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/17 10:13:33 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char **str)
{
	int x;
	int y;

	x = 1;
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x][y])
		{
			ft_putchar(str[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

int		main(int argc, char **argv)
{
	char	*swap;
	int		x;
	int		y;

	x = 1;
	while (x < argc)
	{
		y = 1;
		while (y < argc)
		{
			if (ft_strcmp(argv[x], argv[y]) < 0)
			{
				swap = argv[x];
				argv[x] = argv[y];
				argv[y] = swap;
			}
			y++;
		}
		x++;
	}
	ft_putstr(argv);
	return (0);
}
