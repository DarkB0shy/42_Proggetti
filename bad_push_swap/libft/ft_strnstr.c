/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:36:23 by robegarc          #+#    #+#             */
/*   Updated: 2023/01/20 08:39:16 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 && !n)
		return (0);
	if (s2[0] == '\0' || s2 == s1)
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < n)
		{
			if (s1[i + j] == '\0' && s2[j] == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		i++;
	}
	return (0);
}
