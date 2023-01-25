/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:17:22 by dcarassi          #+#    #+#             */
/*   Updated: 2023/01/25 11:47:56 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *backup, char *buff)
{
	char	*d;
	int		i;
	int		k;

	if (backup == NULL)
		backup = malloc(1 + sizeof(char));
	k = ft_strlen(backup) + ft_strlen(buff);
	d = (char *)malloc(sizeof(char) * (k + 2));
	if (!d)
		return (NULL);
	i = 0;
	while (backup[i])
	{
		d[i] = backup[i];
		i++;
	}
	i = 0;
	while (buff[i])
	{
		d[i + ft_strlen(backup)] = buff[i];
		i++;
	}
	d[i + ft_strlen(backup)] = '\0';
	return (d);
}

