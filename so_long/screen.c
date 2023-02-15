/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:08:02 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/15 15:44:37 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_screen(char *file, t_game *newgame)
{
	int	linez;
	int	colz;

	linez = get_map_lines(file) * 64;
	colz = (get_map_columns(file) - 1) * 64;
	newgame->window = mlx_new_window(newgame->mlx, colz, linez, "so_long");
}

void	init_game(char *file, t_game *new_game)
{
	new_game->mlx = mlx_init();
	init_screen(file, new_game);
	mlx_loop_hook(new_game->mlx, update_screen, (void*)new_game);
	mlx_hook(new_game->window, 2, 0, get_input, (void*)new_game);
}