# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/13 12:34:12 by ldurante          #+#    #+#              #
#    Updated: 2021/03/13 19:21:15 by ldurante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

FLAGS = -Wall -Werror -Wextra

SRCS = srcs/main.c srcs/ft_atoi.c srcs/ft_putchar.c srcs/ft_check_error.c
LIBFT_DIR  = includes/rushlib.h

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRCS)

fclean:
	rm -f $(NAME)

re: fclean all