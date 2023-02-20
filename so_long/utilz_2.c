/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilz_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:51:21 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/17 11:57:51 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_mapextension(char *file)
{
	int	i;

	i = ft_strlen(file);
	if (file[--i] == 'r')
		if (file[--i] == 'e')
			if (file[--i] == 'b')
				if (file[--i] == '.')
					return (1);
	ft_printf("Wrong extension\n");
	exit(2);
}

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = str;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (str);
}

void	ft_bzero(void *str, size_t n)
{
	str = ft_memset(str, '\0', n);
	return ;
}

void	*ft_calloc(size_t nmeb, size_t size)
{
	char	*ptr;

	if (nmeb == SIZE_MAX && size == SIZE_MAX)
		return (0);
	ptr = malloc((nmeb * size));
	if (!ptr)
		return (0);
	ft_bzero(ptr, (nmeb * size));
	return ((void *) ptr);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*s2;

	i = 0;
	s2 = ft_calloc(ft_strlen((char *)s) + 1, sizeof (char));
	if (!s2)
		return (0);
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	return (s2);
}
