/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:55:13 by dcarassi          #+#    #+#             */
/*   Updated: 2023/01/28 14:58:29 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ll_length(long long nb, int base)
{
	int	count;

	count = 0;
	if (nb <= 0)
		count++;
	while (nb && ++count)
		nb /= base;
	return (count);
}

int	ft_put_unsigned_nbr(unsigned int nb)
{
	if (nb == 4294967295)
	{
		ft_putnbr(nb / 10);
		ft_putchar('5');
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(48 + nb % 10);
	}
	if (nb < 0)
		return (ll_length(4294967295 - nb + 1, 10));
	return (ll_length(nb, 10));
}
