/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:06:07 by robegarc          #+#    #+#             */
/*   Updated: 2023/01/21 14:52:46 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_len(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n / 10 > 0 && i++)
		n = n / 10;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*new;
	long	nb;
	size_t	len;

	nb = n;
	len = ft_len(nb) + 1;
	new = (char *)malloc(sizeof(char) * len);
	if (!new)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		new[0] = '-';
	}
	new[--len] = '\0';
	if (nb == 0)
		new[0] = '0';
	while (nb)
	{
		new[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (new);
}
