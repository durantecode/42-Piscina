/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_position.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:47:55 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/14 16:41:11 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushlib.h"

char	*ft_search_position(int pos1)
{
	char	*num_letter;

	num_letter = g_array_letter[pos1];
	return (num_letter);
}

