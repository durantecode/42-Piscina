/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:24:28 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/14 16:43:36 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSHLIB_H
#define	RUSHLIB_H

	#include <unistd.h>
	#include <stdlib.h>
	#include <fcntl.h>
	#include <stdio.h>
	
	char g_array_letter[50][70];

	int		ft_atoi(char *str);
	void	ft_putchar(char c);
	void	ft_check_error(int n);
	char	*open_dict();
	void	get_dict(char *get_dict);
	char	*ft_search_position(int pos1);

#endif