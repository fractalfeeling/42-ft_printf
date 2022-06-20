# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 23:29:11 by lwee              #+#    #+#              #
#    Updated: 2022/06/18 07:40:16 by lwee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra -c

PRINTF_FUNC		= ft_check_flags ft_check_width ft_print_di ft_print_p \
				ft_print_x ft_check_precision  ft_eval_format  \
				ft_printf ft_print_s ft_check_specifier ft_print_c \
				ft_print_u ft_nbr_fns
LIBFT_FUNC		= ft_atoi ft_itoa ft_lstnew ft_putendl_fd ft_strlcat \
				ft_substr ft_bzero ft_putnbr_fd ft_strlcpy \
				ft_tolower ft_calloc ft_memchr ft_putstr_fd ft_strlen \
				ft_toupper ft_isalnum ft_memcmp ft_split ft_strmapi \
				ft_isalpha ft_memcpy ft_strchr ft_strncmp ft_isascii \
				ft_memmove ft_strdup ft_strnstr ft_isdigit ft_memset \
				ft_striteri ft_strrchr ft_isprint ft_putchar_fd \
				ft_strjoin ft_strtrim ft_lstadd_back ft_lstadd_front \
				ft_lstclear ft_lstdelone ft_lstiter ft_lstlast \
				ft_lstmap ft_lstsize 

all: $(NAME) clean

$(NAME):
	gcc $(CFLAGS) $(addsuffix ".c", $(addprefix "libft/", $(LIBFT_FUNC)) $(PRINTF_FUNC)) ft_printf.c
	ar -crs $(NAME) $(addsuffix ".o", $(LIBFT_FUNC) $(PRINTF_FUNC)) ft_printf.o

bonus: all

clean:
	rm -f $(addsuffix ".o", $(LIBFT_FUNC) $(PRINTF_FUNC)) ft_printf.o

fclean: clean
	rm -f $(NAME)

re: fclean all clean

test: re
	gcc $(NAME) testmain.c
	./a.out
	rm -rf a.out

norm: re clean
	norminette $(addsuffix ".c", $(PRINTF_FUNC)) ft_printf.c ft_printf.h

.PHONY: all clean fclean re bonus test norm
