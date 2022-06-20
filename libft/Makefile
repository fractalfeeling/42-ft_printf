# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 23:17:27 by lwee              #+#    #+#              #
#    Updated: 2022/06/15 23:24:13 by lwee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_atoi.c ft_itoa.c ft_lstnew.c ft_putendl_fd.c ft_strlcat.c \
				ft_substr.c ft_bzero.c ft_putnbr_fd.c ft_strlcpy.c \
				ft_tolower.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strlen.c \
				ft_toupper.c ft_isalnum.c ft_memcmp.c ft_split.c ft_strmapi.c \
				ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strncmp.c ft_isascii.c \
				ft_memmove.c ft_strdup.c ft_strnstr.c ft_isdigit.c ft_memset.c \
				ft_striteri.c ft_strrchr.c ft_isprint.c ft_putchar_fd.c \
				ft_strjoin.c ft_strtrim.c
OBJS		= $(SRCS:.c=.o)
BON_SRCS	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
				ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstsize.c 
BON_OBJS	= $(BON_SRCS:.c=.o)
INCL		= .
NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar -rcs
RM			= rm -f

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -I $(INCL) -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $@ $^

bonus:		all $(NAME) $(BON_OBJS)
			$(AR) $(NAME) $(BON_OBJS)

clean:
			$(RM) $(OBJS) $(BON_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
