/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:29 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/14 18:34:46 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	get_map_lines(char *file)
{
	int	byte_read;
	int	lines;
	int	fd;
	int	buffer;

	lines = 1;
	fd = open(file, O_RDONLY);
	if (!fd)
		return (0);
	byte_read = read(fd, &buffer, 1);
	while (byte_read > 0)
	{
		if (buffer == '\n')
			lines++;
		byte_read = read(fd, &buffer, 1);
	}
	close (fd);
	return (lines);
}

void	parse_map(char *file, t_game *game)
{
	int		i;
	int		fd;
	char	*line;

	game->map = malloc(sizeof(char *) * get_map_lines(file));
	i = 1;
	fd = open(file, O_RDONLY);
	line = get_next_line(fd);
	if (line)
		game->map[0] = line;
	while (line)
	{
		line = get_next_line(fd);
		game->map[i] = line;
		i++;
	}
	close(fd);
}

int	wall_check(char *file, t_game *game)
{

}

char	**init_map(char *file, t_game *game)
{
	parse_map(file, game);
	// if (!wall_check(file, game))
	// 	return (NULL);
	// if (!map_check(game->map))
	// 	return (NULL);
	return (game->map);
}
