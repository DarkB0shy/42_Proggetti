/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:16:55 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/15 17:33:35 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_map(t_game *newgame)
{
	int	i;
	int	j;

	i = 0;
	while (newgame->map[i] != NULL)
	{
		j = 0;
		while (newgame->map[i][j])
		{
			if (newgame->map[i][j] == '1')
				mlx_put_image_to_window(newgame->mlx, newgame->window, newgame->wall.img0.reference, j * 64, i * 64);
			else
				mlx_put_image_to_window(newgame->mlx, newgame->window, newgame->floor.img0.reference, j * 64, i * 64);
			j++;
		}
		i++;
	}
}

void	draw_player_and_collectibles(t_game *newgame)
{
	int	i;
	int	j;

	i = 0;
	while (newgame->map[i] != NULL)
	{
		j = 0;
		while (newgame->map[i][j])
		{
			if (newgame->map[i][j] == 'C')
				mlx_put_image_to_window(newgame->mlx, newgame->window, newgame->collectible.img0.reference, j * 64, i * 64);
			else if (newgame->map[i][j] == 'P')
				mlx_put_image_to_window(newgame->mlx, newgame->window, newgame->player.img0.reference, j * 64, i * 64);
			j++;
		}
		i++;
	}
}

int	update_screen(t_game *newgame)
{
	mlx_clear_window(newgame->mlx, newgame->window);
	draw_map(newgame);
	draw_player_and_collectibles(newgame);
	return (1);
}