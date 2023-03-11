/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:45:17 by robegarc          #+#    #+#             */
/*   Updated: 2023/01/21 09:08:35 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check_set(char const s, char const *set)
{
	while (*set)
	{
		if (*set == s)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		j;
	int		x;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i] && check_set(s1[i], set))
		i++;
	j = ft_strlen((char *)s1);
	while ((j > i) && check_set(s1[j - 1], set))
		j--;
	new = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!new)
		return (NULL);
	while (i < j)
		new[x++] = s1[i++];
	new[x] = 0;
	return ((char *)new);
}
