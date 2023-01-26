/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:13:16 by dcarassi          #+#    #+#             */
/*   Updated: 2023/01/26 12:25:30 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*line;
	char	*buffer;
	int			n_bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	n_bytes = 1;
	while (!(ft_strchr(line, '\n')) && n_bytes > 0)
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
	free(buffer);
	return (clean_line(line));
}

char	*new_line(char *line)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (!line[i])
	{
		free(line);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(line) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (line[i])
		str[j++] = line[i++];
	str[j] = '\0';
	free(line);
	return (str);
}

char	*clean_line(char *str)
{
	char	*ret;
	int		i;

	i = 0;
	while (str[i] != '\n')
		i++;
	ret = (char *)malloc(sizeof(char) * (i + 2));
	if (!ret)
		return (NULL);
	i = 0;
	while (str[i] != '\n')
	{
		ret[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		ret[i] = '\n';
		i++;
	}
	ret[i] = 0;
	return (ret);
}
