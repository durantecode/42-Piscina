/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 09:26:52 by aparolar          #+#    #+#             */
/*   Updated: 2021/02/28 18:27:28 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_isnegative(int z)
{
	if (z < 0)
		z = -z;
	return (z);
}

void	rush(int x, int y)
{
	int x1;
	int y1;

	x = ft_isnegative(x);
	y = ft_isnegative(y);
	y1 = 1;
	while (y1 <= y)
	{
		x1 = 1;
		while (x1 <= x)
		{
			if ((x1 == 1 && y1 == 1) || (x1 == x && y1 == y && x > 1 && y > 1))
				ft_putchar('/');
			else if ((x1 == 1 && y1 == y) || (x1 == x && y1 == 1))
				ft_putchar('\\');
			else if (y1 > 1 && y1 < y && x1 > 1 && x1 < x)
				ft_putchar(' ');
			else
				ft_putchar('*');
			x1++;
		}
		ft_putchar('\n');
		y1++;
	}
}
