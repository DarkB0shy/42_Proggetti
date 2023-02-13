/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:08:02 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/13 17:46:29 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_screen(t_game *newgame)
{
	int	map_linez = 0;
	int	i = 0;
	int	j;

	while (newgame->map[i] != NULL)
	{
		j = 0;
		while (j < ft_strlen(newgame->map[0]))
		{
			if (newgame->map[i][j] == '\n')
				map_linez++;
			j++;
		}
		i++;
	}
	newgame->window->reference = mlx_new_window(newgame->mlx, (ft_strlen(newgame->map[0]) - 1) * 64, map_linez * 64, "so_long");
}

void	init_game(t_game *new_game)
{
	new_game->mlx = mlx_init();
	init_screen(new_game);
	mlx_loop_hook(new_game->mlx, update_screen, (void*)new_game);
	mlx_hook(new_game->window->reference, 2, 0, get_input, (void*)new_game);
}