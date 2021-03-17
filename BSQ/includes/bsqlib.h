/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsqlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:24:28 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/17 20:40:18 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQLIB_H
# define BSQLIB_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	**g_array_map;
char	*g_first_line;

void	ft_check_error(int n);
void	get_map(char *file_name);
void	get_byte_count(int fd);
void	get_first_line(char *get_map);
void	get_full_array(char *get_map);


#endif
