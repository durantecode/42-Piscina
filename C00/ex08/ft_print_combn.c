/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 10:39:21 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/01 15:56:22 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (n > 9)
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
}

void	ft_num(int num)
{
	





void	ft_print_combn(int n)
{
	int a;
	int b;
	
	if (n > 0 && n < 10)
		while (a < n)
			ft
