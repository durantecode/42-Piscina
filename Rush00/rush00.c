/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 09:26:38 by aparolar          #+#    #+#             */
/*   Updated: 2021/02/28 20:10:11 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int x1;
	int y1;

	y1 = 1;
	while (y1 <= y)
	{
		x1 = 1;
		while (x1 <= x)
		{
			if ((x1 == 1 && y1 == 1) || (x1 == x && y1 == 1))
				ft_putchar('o');
			else if ((x1 == 1 && y1 == y) || (x1 == x && y1 == y))
				ft_putchar('o');
			else if (y1 > 1 && y1 < y && x1 > 1 && x1 < x)
				ft_putchar(' ');
			else if (y1 == 1 || y1 == y)
				ft_putchar('-');
			else if (x1 == 1 || x1 == x)
				ft_putchar('|');
			x1++;
		}
		ft_putchar('\n');
		y1++;
	}
}
