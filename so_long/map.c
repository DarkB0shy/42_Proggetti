/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:29 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/08 16:44:56 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**fill_map(int fd, char **map, int lines)
{
	
}

char	**new_map(int fd)
{
	char	**map;
	char	*Ernesto;
	int		byte;
	int		lines;

	lines = 0;
	byte = read(fd, Ernesto, 1);
	while (byte > 0)
	{
		if (Ernesto[0] == '\n')
			lines++;
		byte = read(fd, Ernesto, 1);
	}
	map = malloc(sizeof(char *) * (lines));
	ft_printf("%d\n", lines);
	fill_map(fd, map, lines);
	return (map);
}

char	**init_map(char *file, t_game *game)
{
	int	fd;
	int	i;

	fd = open(file, O_RDONLY);
	game->map = new_map(fd);
	if (!game->map)
	{
		ft_printf("Something wrong with the map");
		return (NULL);
	}
	close(fd);
	return (game->map);
}
