/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:57:46 by lwee              #+#    #+#             */
/*   Updated: 2022/06/15 21:15:39 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	s_handle_width(t_format *format, int len)
{
	if (format->width > len)
	{
		format->total = format->total + format->width - len;
		while (format->width > len)
		{
			ft_putchar_fd(' ', 1);
			format->width--;
		}
	}
}

static void	s_handle_string(t_format *format, char *str, int len)
{
	if (format->flag[e_minus] == '1' && format->precision != 0)
		ft_putstr_fd(str, 1);
	s_handle_width(format, len);
	if (format->flag[e_minus] == '0' && format->precision != 0)
		ft_putstr_fd(str, 1);
	format->total = format->total + len;
}

void	ft_print_s(t_format *format)
{
	char	*str;
	char	*tmp;
	int		len;

	tmp = ft_strdup(va_arg(format->arguments, char *));
	if (tmp == NULL)
		tmp = ft_strdup("(null)");
	if (format->precision == -1)
		str = ft_strdup(tmp);
	else
	{
		if (!IS_MACOS && (format->precision >= 0 && format->precision < 6)
			&& (ft_strncmp(tmp, "(null)", 6) == 0))
			format->precision = 0;
		str = ft_substr(tmp, 0, format->precision);
	}
	if (format->precision == -1 || format->precision > 0)
		len = ft_strlen(str);
	else
		len = 0;
	s_handle_string(format, str, len);
	format->fstring++;
	free(str);
}
