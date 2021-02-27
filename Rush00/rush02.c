/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 12:11:09 by ldurante          #+#    #+#             */
/*   Updated: 2021/02/27 14:47:22 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int corx;
	int cory;

	corx = 1;
	cory = 1;
	while (cory <= y)
	{
		while (corx <= x)
		{
			if ((corx == 1 || corx == x) && y == 1) 
			ft_putchar('A');
			else if ((cory == 1 ||	cory == y) && (corx > 1 && corx < x))
			ft_putchar('B');
		




			corx++;
		}
	ft_putchar('\n');
	cory++;	
	}
}






