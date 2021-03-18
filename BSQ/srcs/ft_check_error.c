/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:33:34 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/18 13:58:33 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsqlib.h"

void	ft_check_error(int n)
{
	if (n == 1)
		write(1, "error1\n", 7);
	if (n == 2)
		write(1, "error1\n", 7);
	if (n == 3)
		write(1, "error1\n", 7);
	if (n == 4)
		write(1, "error1\n", 7);
}
