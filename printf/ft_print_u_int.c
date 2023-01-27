/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 00:09:25 by dcarassi          #+#    #+#             */
/*   Updated: 2023/01/28 00:27:18 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_u_len(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_u_itoa(unsigned int nb)
{
	char	*str;
	int		len;

	len = get_u_len(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (nb != 0)
	{
		str[len - 1] = nb % 10 + 48;
		nb = nb / 10;
		len--;
	}
	return (str);
}

int	ft_put_u_int(unsigned int nb)
{
	int		char_printed;
	char	*str;

	char_printed = 0;
	if (nb == 0)
		char_printed += write(1, "0", 1);
	else
	{
		str = ft_itoa(nb);
		char_printed += ft_putstr(str);
		free(str);
	}
	return (char_printed);
}
