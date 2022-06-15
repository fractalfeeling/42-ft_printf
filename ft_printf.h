/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:32:21 by lwee              #+#    #+#             */
/*   Updated: 2022/06/15 14:42:24 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

enum	e_flags
{
	e_hash,
	e_zero,
	e_minus,
	e_space,
	e_plus,
};

typedef struct s_format
{
	const char	*fstring;
	va_list		arguments;
	char		flag[5];
	int			width;
	int			precision;
	int			point;
	int			total;
}	t_format;

int		ft_printf(const char *fstring, ...);
void	ft_ft_eval_format(t_format *format);
void	ft_check_flags(t_format *format);
void	ft_check_width(t_format *format);
void	ft_check_precision(t_format *format);
void	ft_check_specifier(t_format *format);
void	ft_print_c(t_format *format);
void	ft_print_s(t_format *format);
void	ft_print_p(t_format *format);
void	ft_print_di(t_format *format);
void	ft_print_u(t_format *format);

# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0
# endif

#endif
