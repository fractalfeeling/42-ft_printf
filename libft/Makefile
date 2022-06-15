# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 15:07:48 by lwee              #+#    #+#              #
#    Updated: 2022/03/08 16:04:15 by lwee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADERS = ./
SRC = ft_*.c
OFILES = ft_*.o

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRC) -I $(HEADERS)
	@ar rc $(NAME) $(OFILES)

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re:fclean all
