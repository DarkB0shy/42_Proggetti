/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:16:58 by dcarassi          #+#    #+#             */
/*   Updated: 2023/01/21 19:20:17 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			j;
	const char	*begin;

	begin = s;
	j = ft_strlen(s);
	s = (s + j);
	while (*s != *begin && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
