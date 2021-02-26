/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 07:29:18 by ldurante          #+#    #+#             */
/*   Updated: 2021/02/26 15:01:17 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x)
{
	write(1, &x, 1);
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

	c  = 0 ;
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

int main()
{

	ft_print_comb2();
}
