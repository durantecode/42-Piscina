# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/13 12:34:12 by ldurante          #+#    #+#              #
#    Updated: 2021/03/17 08:20:45 by ldurante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

FLAGS = -Wall -Werror -Wextra

SRCS = srcs/*.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean