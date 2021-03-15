/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:34:59 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/13 10:02:45 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}

int		main(void)
{
	rev_print("rainbow dash");
	write(1, "\n", 1);
	rev_print("Ponies are awesome");
	write(1, "\n", 1);
	rev_print("");
	write(1, "\n", 1);
	return (0);
}