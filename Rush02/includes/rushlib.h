/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:24:28 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/13 16:48:52 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSHLIB_H
#define	RUSHLIB_H

	#include <unistd.h>
	#include <stdlib.h>
	#include <fcntl.h>
	#include <stdio.h>

	int		ft_atoi(char *str);
	void	ft_putchar(char c);
	void	ft_check_error(int n);
	int		ft_checknumber(int n);

#endif