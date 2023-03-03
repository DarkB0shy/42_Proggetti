/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:11:36 by robegarc          #+#    #+#             */
/*   Updated: 2023/01/17 10:11:51 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*fir;
	unsigned char	*sec;
	size_t			i;

	fir = (unsigned char *)s1;
	sec = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (fir[i] != sec[i])
			return (fir[i] - sec[i]);
		i++;
	}
	return (0);
}
