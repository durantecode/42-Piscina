/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsqlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:24:28 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/18 21:27:42 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQLIB_H
# define BSQLIB_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	**g_array_map;
char	*g_chips;
char	*square;
char	*square_b; // i
char	*square_h; // j

void	ft_check_error(int n);
void	get_map(char *file_name);
void	get_byte_count(int fd);
void	get_first_line(char *get_map, int column);
void	get_full_array(char *get_map, int column, int row, int first_line);
int		ft_find_sqr(int i, int j, int l);
void	ft_print_sqr(int row, int column);
int		ft_fill_sqr(int i, int j, int k);
char	*ft_find_max(int row, int column);
void    ft_create_ultimate(void);
void    ft_print_array(int row, int column);
int     ft_count_free_pos(int row, int column);


#endif
