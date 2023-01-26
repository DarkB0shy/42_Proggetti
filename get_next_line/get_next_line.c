/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:13:16 by dcarassi          #+#    #+#             */
/*   Updated: 2023/01/25 14:58:39 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static	char	*line;
	char			*buffer;
	int				n_bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	n_bytes = 1;
	while (!(ft_strchr(line, '\n')) && n_bytes >= 0)
	{
		n_bytes = read(fd, buffer, BUFFER_SIZE);
		if (n_bytes != -1)
			line = ft_strjoin(line, buffer);
		else
		{
			free(buffer);
			return (0);
		}
	}
	line[ft_strlen(line)] = 0;
	return (line);
}
