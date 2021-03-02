/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 10:39:21 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/02 09:03:54 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_num(int num)
{
	int		a;
	int		b;

	if (num > 9)
	{
		a = num / 10;
		b = num % 10;
		ft_putchar(a + 48);
		ft_putchar(b + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(num + 48);
	}
}

void	ft_print_comb2(void)
{
	int	c;
	int	d;

	c = 0;
	while (c <= 99)
	{
		d = c + 1;
		while (d <= 99)
		{
			ft_num(c);
			ft_putchar(' ');
			ft_num(d);
			if (c < 98 || d < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d++;
		}
		c++;
	}
}

int		main(void)
{
	ft_print_comb2();
}
