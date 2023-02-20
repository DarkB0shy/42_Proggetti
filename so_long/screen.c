/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:08:02 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/20 11:34:21 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close(void)
{
	exit(2);
}

void	init_screen(char *file, t_game *newgame)
{
	int	linez;
	int	colz;

	linez = 0;
	colz = 0;
	newgame->h = 0;
	newgame->h = ft_strlen(newgame->map[0]);
	linez = newgame->b * 64;
	colz = newgame->h * 64;
	newgame->window = mlx_new_window(newgame->mlx, colz, linez, "so_long");
	mlx_hook(newgame->window, 17, 0, ft_close, 0);
}

void	init_game(char *file, t_game *new_game)
{
	new_game->mlx = mlx_init();
	init_screen(file, new_game);
	mlx_loop_hook(new_game->mlx, update_screen, (void *)new_game);
	mlx_hook(new_game->window, 2, 0, get_input, (void *)new_game);
}
