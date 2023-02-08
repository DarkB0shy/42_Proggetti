/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:29 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/08 12:07:16 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**empty_map(char *file)
{
	char	**map;
	int		lines;
	int		fd;
	int		bytes;
	char	buffer;

	fd = open(file, O_RDONLY);
	if (!fd)
		return (NULL);
	lines = 1;
	bytes = read(fd, &buffer, 1);
	while (bytes > 0)
	{
		if (buffer == '\n')
			lines++;
		bytes = read(fd, &buffer, 1);
	}
	close(fd);
	map = malloc(sizeof(char*) * lines);
	return (map);
}

char	**init_map(char *file, t_game *game)
{
	int	fd;
	int	i;

	game->map = empty_map(file);
	if (!game->map)
	{
		ft_printf("Something wrong with the map");
		return (NULL);
	}
	fd = open(file, O_RDONLY);
	close(fd);
	return (game->map);
}
