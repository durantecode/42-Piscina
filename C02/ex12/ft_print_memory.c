/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:21:20 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/08 15:06:22 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_hex(int x)
{
    int     a;
    int     b;
    char    *hex;

	hex = "0123456789abcdf";
    a = hex[x / 16];
    b = hex[x % 16];
    ft_putchar('\\');
    ft_putchar(a);
    ft_putchar(b);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int x;
	char	*str;

	x = 0;
	str = addr;
	if (size != 0)
	{
		while (str[x] != 0)
		{
		//	ft_putchar(str[0]);
			x++;
		}
		write(1, &addr, sizeof(addr));
	}
}

int 	main(void)
{
	ft_print_memory("Bonjour les amin\nches... c est fo\nu.tout.ce qu on\n", 9);
}


