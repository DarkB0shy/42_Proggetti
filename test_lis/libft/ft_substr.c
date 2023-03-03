/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:40:58 by robegarc          #+#    #+#             */
/*   Updated: 2023/01/17 10:41:06 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if ((int)start >= ft_strlen(s))
		return (ft_strdup(""));
	if ((int)len > ft_strlen(s))
		len = ft_strlen(s);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{	
		if (i >= start && j < len)
			sub[j++] = s[i];
		i++;
	}
	sub[j] = 0;
	return (sub);
}
