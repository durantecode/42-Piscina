/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 09:53:54 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/10 17:32:04 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void    ft_putstr_non_printable(char *str)
{
    char    *hexa;
    unsigned char value;

    hexa = "0123456789abcdf";
    while (*str != '\0')
    {
        value = (unsigned char)*str;
        if (value < 32 || value > 126)
        {
            ft_putchar('\\');
            ft_putchar(hexa[value / 16]);
            ft_putchar(hexa[value % 16]);
        }
        else
            ft_putchar(*str);
        str++;
    }
}	

int		main(void)
{
	ft_putstr_non_printable("CÑoucou\n\n\ntu va\ts bien ?");
}
