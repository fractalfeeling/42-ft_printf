# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 15:07:48 by lwee              #+#    #+#              #
#    Updated: 2022/06/15 21:03:43 by lwee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror -c

SRCS = ./libft/ft*.c ./src/ft*.c

OBJS = ft*.o
LIB_PATH = ./libft
HEADERS = ./src

all: $(NAME)

$(NAME):
	@make re -C $(LIB_PATH)
	@$(CC) -g3 $(CFLAGS) $(SRCS) -I $(HEADERS)
	@ar rc $(NAME) $(OBJS) $(LIB_PATH)/*.o
	@ranlib $(NAME)

bonus: $(NAME)

clean:
	@/bin/rm -f $(OBJS)
	@make clean -C $(LIB_PATH)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
