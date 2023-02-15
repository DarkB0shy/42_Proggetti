/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:29 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/15 18:18:22 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "utilz.c"

void	parse_map(char *file, t_game *game)
{
	int		i;
	int		fd;
	char	*line;
	int		c_line;

	c_line = 0;
	fd = open(file, O_RDONLY);
	game->map = malloc (sizeof(char *) * get_map_lines(file));
	while (c_line < get_map_lines(file))
	{
		game->map[c_line] = get_next_line(fd);
		c_line++;
	}
	close(fd);
	game->map[c_line] = NULL;
}

int	wall_check(char *file, t_game *game)
{
	int	i;

	i = 0;
	while (i < (get_map_columns(file) - 2))
	{
		if (game->map[0][i] != '1' || game->map[get_map_lines(file) - 1][i] != '1')
			return (0 * ft_printf("No brick bot-top\n"));
		i++;
	}
	i = 0;
	while (i < get_map_lines(file) - 1)
	{
		if (game->map[i][0] != '1' || game->map[i][get_map_columns(file) - 2] != '1')
			return (0 * ft_printf("No brick sidelane\n"));
		i++;
	}
	if (game->map[i][get_map_columns(file) - 2] != '1')
		return (0 * ft_printf("No corner brick\n"));
	return (1);
}

int	map_check(char *file, t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == 'P')
			{
				game->player.pos.x = i;
				game->player.pos.y = j;
				game->player.nb++;
			}
			else if (game->map[i][j] == 'C')
				game->collectible.nb++;
			else if (game->map[i][j] == 'E')
			{
				game->exit.nb++;
				game->exit.pos.x = i;
				game->exit.pos.y = j;
			}
			j++;
		}
		i++;
	}
	if (!game->player.nb || !game->collectible.nb)
		return (0 * ft_printf("No player-collectible\n"));
	if (!game->exit.nb)
		return (0 * ft_printf("No exit\n"));
	return (1);
}

char	**init_map(char *file, t_game *game)
{
	parse_map(file, game);
	if (!wall_check(file, game))
		return (NULL);
	if (!map_check(file, game))
		return (NULL);
	return (game->map);
}
