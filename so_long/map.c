/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:29 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/09 19:19:50 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**fill_map(char **map, int lines, char *file)
{
	int		i;
	int		fd;

	i = 0;
	fd = open(file, O_RDONLY);
	while (i <= lines)
	{
		map[i] = get_next_line(fd);
		i++;
	}
	map[i] = NULL;
	close (fd);
	return (map);
}

int	wall_check(char **map)
{
	int	i;
	int	len;

	len = ft_strlen(map[0]);
	i = -1;
	while (map[++i])
	{
		if (ft_strlen(map[i]) != len)
			return (0 * ft_printf("Map is missing some bricks\n"));
		if (map[i][0] != '1' || map[i][len - 2] != '1')
			return (0 * ft_printf("Map needs a side brick\n"));
	}
	while (--len > 0)
	{
		if (map[0][len - 1] != '1')
			return (0 * ft_printf("Map needs a top brick\n"));
		if (map[i - 1][len - 1] != '1')
			return (0 * ft_printf("Map needs a bot brick\n"));
	}
	return (1);
}

char	**new_map(char *file)
{
	char	**map;
	int		byte;
	int		lines;
	int		fd;
	char	Ernesto;

	fd = open(file, O_RDONLY);
	if (!fd)
		return (NULL);
	byte = read(fd, &Ernesto, 1);
	lines = 0;
	while (byte > 0)
	{
		if (Ernesto == '\n')
			lines++;
		byte = read(fd, &Ernesto, 1);
	}
	close(fd);
	map = malloc(sizeof(char *) * (lines + 1));
	fill_map(map, lines, file);
	return (map);
}

char	**init_map(char *file, t_game *game)
{
	int	fd;
	int	i;

	game->map = new_map(file);
	if (!game->map)
	{
		ft_printf("Something wrong with the map\n");
		return (NULL);
	}
	if (!wall_check(game->map))
		return (NULL);
	return (game->map);
}
