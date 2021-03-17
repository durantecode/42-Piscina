/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsqlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:24:28 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/16 12:50:27 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQLIB_H
# define BSQLIB_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

void	ft_check_error(int n);
char	*open_map(char *file_name);


#endif
