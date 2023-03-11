/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:29:20 by robegarc          #+#    #+#             */
/*   Updated: 2023/01/17 10:29:31 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	d;
	size_t	s;

	s_len = ft_strlen(src);
	if (!dst && size == 0)
		return (s_len);
	d = ft_strlen(dst);
	d_len = d;
	if (size <= d)
		return (size + s_len);
	s = 0;
	while (src[s] && ((d + 1) < size))
		dst[d++] = src[s++];
	dst[d] = '\0';
	return (d_len + s_len);
}
