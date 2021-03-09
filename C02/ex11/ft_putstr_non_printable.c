/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 09:53:54 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/09 21:02:06 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(int x)
{
	int 	a;
	int 	b;
	char	*hex;

	hex = "0123456789abcdf";
	a = hex[x / 16];
	b = hex[x % 16];
	ft_putchar('\\');
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_putstr_non_printable(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 32 || str[x] > 126)
			{	
				ft_print_hex(str[x]);
			}
		else
		{
			ft_putchar(str[x]);
		}
		x++;
	}
}	

int		main(void)
{
	ft_putstr_non_printable("Coƒucou\n\n\ntu va\ts bi\xen ?");
}
