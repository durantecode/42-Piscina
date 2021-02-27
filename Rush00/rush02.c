/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 12:11:09 by ldurante          #+#    #+#             */
/*   Updated: 2021/02/27 20:10:30 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int y, int x)
{
	int v;
	int h;

	v = 1;
	h = 1;
	while (h <= x)
	{
		v = 1;
		while (v <= y)
		{
			if ((h == 1 && v == 1) || (h == 1 && v == y))
				ft_putchar('A');
			else if ((h > 1 && h < x) && (v == 1 || v == y))
				ft_putchar('B');
			else if ((h == 1 || h == x) && (v > 1 && v < y))
				ft_putchar('B');
			else if ((h == x && v == 1) || (h == x && v == y))
				ft_putchar('C');
			else
				ft_putchar(' ');
			v++;
		}
		ft_putchar('\n');
		h++;
	}
}
