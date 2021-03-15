/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:24:28 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/14 21:39:12 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSHLIB_H
# define RUSHLIB_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	g_array_letter[31][50];
void	ft_putchar(char c);
void	ft_check_error(int n);
char	*open_dict();
void	get_dict(char *get_dict);
char	*ft_search_position(int pos1);
int		ft_amount(int n);
int		ft_strlen(char *str);
int		ft_char_to_number(char c);
void	ft_parameters_to_find(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_check_number(char *str);
void	ft_split_number(int value, int amount);
char	*ft_strcat(char *dest, char *src);
void	ft_putstr(char *str);

#endif
