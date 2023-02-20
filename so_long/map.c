/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:29 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/20 11:34:44 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	parse_map(char *file, t_game *game)
{
	int		fd;
	char	*line;
	int		c_line;
	int		n_linez;

	c_line = 0;
	n_linez = get_map_lines(file);
	game->map = malloc(sizeof(char *) * n_linez + 1);
	game->b = 0;
	fd = open(file, O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (!line || line[0] == 10)
			break ;
		game->map[c_line] = ft_strdup(line);
		if (game->map[c_line][ft_strlen(game->map[c_line]) - 1] == '\n')
			game->map[c_line][ft_strlen(game->map[c_line]) - 1] = '\0';
		free(line);
		c_line++;
		game->b++;
	}
	free(line);
	close(fd);
	game->map[c_line] = NULL;
}

int	wall_check(char *file, t_game *game)
{
	int	i;

	i = 0;
	while (i < (get_map_columns(file) - 2))
	{
		if (game->map[0][i] != '1' ||
		game->map[game->b - 1][i] != '1')
			return (0 * ft_printf("No brick bot-top\n"));
		i++;
	}
	i = 0;
	while (i < game->b - 1)
	{
		if (game->map[i][0] != '1' ||
		game->map[i][get_map_columns(file) - 2] != '1')
			return (0 * ft_printf("No brick sidelane\n"));
		i++;
	}
	if (game->map[i][get_map_columns(file) - 2] != '1')
		return (0 * ft_printf("No corner brick\n"));
	return (1);
}

void	player_check(char *file, t_game *game)
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
				if (game->player.nb > 0)
				{
					ft_printf("Invalid map\n");
					exit(2);
				}
				game->player.pos.x = i;
				game->player.pos.y = j;
				game->player.nb++;
			}
			j++;
		}
		i++;
	}
}

void	map_check(char *file, t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] != '0' && game->map[i][j] != '1' &&
					game->map[i][j] != 'C' && game->map[i][j] != 'E' &&
					game->map[i][j] != 'P')
				wrong_map();
			if (game->map[i][j] == 'C')
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
}

char	**init_map(char *file, t_game *game)
{
	parse_map(file, game);
	map_check(file, game);
	if (!game->collectible.nb)
	{
		ft_printf("No collectible\n");
		exit(2);
	}
	if (!game->exit.nb)
	{
		ft_printf("No exit\n");
		exit(2);
	}
	player_check(file, game);
	if (!game->player.nb)
	{
		ft_printf("No player\n");
		exit(2);
	}
	if (!wall_check(file, game))
		return (NULL);
	return (game->map);
}
