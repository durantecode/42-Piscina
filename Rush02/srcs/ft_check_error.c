/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:03:45 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/13 18:28:30 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushlib.h"

void	ft_check_error(int n)
{
	if (n == -1)
		write(1, "Dict Error\n", 11);
	else if (n == 0)
		write(1, "Error\n", 6);
	else if (n == 1)
		write(1, "Invalid argument count\n", 23);
	else if (n == 2)
		write(1, "Argument error\n", 16);
}