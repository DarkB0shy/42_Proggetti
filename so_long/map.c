/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:29 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/16 19:51:39 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "utilz.c"


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

void	parse_map(char *file, t_game *game)
{
	int		i;
	int		fd;
	char	*line;
	int		c_line;
	int		n_linez;

	c_line = 0;
	n_linez = 0;
	n_linez = get_map_lines(file);
	game->map = malloc(sizeof(char *) * n_linez);
	fd = open(file, O_RDONLY);
	line = get_next_line(fd);
	while (c_line < n_linez)
	{
		game->map[c_line] = ft_strdup(line);
		// ft_printf("%s\n", game->map[c_line]);
		if (game->map[c_line][ft_strlen(game->map[c_line]) - 1] == '\n')
			game->map[c_line][ft_strlen(game->map[c_line]) - 1] = '\0';
		free(line);
		line = get_next_line(fd);
		c_line++;
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
		ft_printf("%d\n", i);
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
		// ft_printf("sono qui oidocrop!\n");
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
	// if (!wall_check(file, game))
	// 	return (NULL);
	// if (!map_check(file, game))
	// 	return (NULL);
	return (game->map);
}
