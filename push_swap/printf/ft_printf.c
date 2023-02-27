/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:22:59 by dcarassi          #+#    #+#             */
/*   Updated: 2023/01/28 15:00:18 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_conversion(va_list vl, const char format)
{
	int	char_printed;

	char_printed = 0;
	if (format == 'c')
		char_printed += ft_putchar(va_arg(vl, int));
	else if (format == 's')
		char_printed += ft_putstr(va_arg(vl, char *));
	else if (format == 'p')
		char_printed += ft_putptr(va_arg(vl, intptr_t));
	else if (format == 'u')
		char_printed += ft_put_unsigned_nbr(va_arg(vl, unsigned int));
	else if (format == 'd')
		char_printed += ft_putnbr(va_arg(vl, int));
	else if (format == 'i')
		char_printed += ft_putnbr(va_arg(vl, int));
	else if (format == 'x' || format == 'X')
		char_printed += ft_puthex(va_arg(vl, unsigned int), format);
	else if (format == '%')
		char_printed += ft_putchar('%');
	return (char_printed);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	vl;
	int		char_printed;

	i = 0;
	char_printed = 0;
	va_start(vl, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			char_printed += ft_conversion(vl, format[i + 1]);
			i++;
		}
		else
			char_printed += ft_putchar(format[i]);
		i++;
	}
	va_end(vl);
	return (char_printed);
}
