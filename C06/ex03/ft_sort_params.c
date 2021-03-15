/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:05:50 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/15 16:05:41 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_sort_int_tab(char *tab, int size)
{
	int x;
	int y;
	int swap;

	x = 0;
	while (x < size)
	{
		y = x + 1;
		while (y < size)
		{
			if (tab[y] < tab[x])
			{
				swap = tab[x];
				tab[x] = tab[y];
				tab[y] = swap;
			}
			y++;
		}
		x++;
	}
	return (tab);
}

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		size;

	i = 1;
	while (i < argc)
	{
		size = ft_strlen(argv[i]);
		str = ft_sort_int_tab(argv[i], size);
		ft_putstr(str);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
