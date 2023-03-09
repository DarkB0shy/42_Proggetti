/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:13:53 by robegarc          #+#    #+#             */
/*   Updated: 2023/01/28 10:17:34 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len += write(1, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		n = -n;
		len += ft_putchar('-');
	}
	if (n > 9)
	{
		len += print_int(n / 10);
		len += print_int(n % 10);
	}
	else
		len += ft_putchar(n + 48);
	return (len);
}

int	print_uint(unsigned int n)
{
	int	ulen;

	ulen = 0;
	if (n > 9)
		ulen += print_uint(n / 10);
	ulen += ft_putchar(n % 10 + 48);
	return (ulen);
}

int	print_hex(unsigned int n, const char ptr)
{
	unsigned int	len;

	len = 0;
	if (n > 15)
	{
		len += print_hex(n / 16, ptr);
		len += print_hex(n % 16, ptr);
	}
	else
	{
		if (n < 10)
			len += ft_putchar(48 + n);
		else
		{
			if (ptr == 'x')
				len += ft_putchar('a' + n - 10);
			if (ptr == 'X')
				len += ft_putchar('A' + n - 10);
		}
	}
	return (len);
}

int	print_p(intptr_t n)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += print_p(n / 16);
		len += print_p(n % 16);
	}
	else
	{
		if (n < 10)
			len += ft_putchar(48 + n);
		else
			len += ft_putchar('a' + n - 10);
	}
	return (len);
}
