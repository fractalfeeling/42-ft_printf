/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:46:50 by lwee              #+#    #+#             */
/*   Updated: 2022/06/15 17:09:33 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	di_handle_width(t_format *format, int len)
{
	while (format->width > len)
	{
		if (format->flag[e_zero] == '1')
			ft_putchar_fd('0', 1);
		else
			ft_putchar_fd(' ', 1);
		format->width--;
		format->total++;
	}
}

static int	handle_di(t_format *format, char *str, int neg, int len)
{
	int	diff;

	diff = format->precision - len;
	if (diff < 0)
		diff = 0;
	len += diff;
	if (format->point == 1)
		format->flag[e_zero] = '0';
	if (format->flag[e_zero] == '0' && format->flag[e_minus] == '0')
		di_handle_width(format, len);
	if (neg == 1)
		ft_putchar_fd('-', 1);
	if (format->flag[e_space] == '1')
		ft_putchar_fd(' ', 1);
	if (format->flag[e_plus] == '1')
		ft_putchar_fd('+', 1);
	if (format->flag[e_zero] == '1')
		di_handle_width(format, len);
	else
		while (diff-- > 0)
			ft_putchar_fd('0', 1);
	ft_putstr_fd(str, 1);
	if (format->flag[e_minus] == '1')
		di_handle_width(format, len);
	return (len);
}

void	ft_print_di(t_format *format)
{
	char	*str;
	int		nb;
	int		len;
	int		neg;

	nb = va_arg(format->arguments, int);
	neg = (nb < 0);
	nb *= -neg;
	str = ft_itoa(nb);
	len = ft_strlen(str);
	if (*str == '0' && format->point == 1 && format->precision == 0)
		len = 0;
	if (neg == 1 || format->flag[e_plus] == '1')
		len++;
	else if (format->flag[e_space] == '1')
		len++;
	if (len > 0)
		len = handle_di(format, str, len, neg);
	format->total += len;
	free(str);
	format->fstring++;
}
