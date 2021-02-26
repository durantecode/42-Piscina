/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:06:58 by ldurante          #+#    #+#             */
/*   Updated: 2021/02/26 13:06:06 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>

void    ft_putchar(char c)
{
     write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb > -2147483648 || nb <= 2147483647)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
			return;
		}
/*		else if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
			ft_putnbr(nb);
		}
		else
*/	//		ft_putchar(nb + '0');
	}
}

int main()
{
	ft_putnbr(345677);
}
