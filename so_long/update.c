/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:16:55 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/18 14:54:07 by dcarassi         ###   ########.fr       */
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
				mlx_put_image_to_window(newgame->mlx, newgame->window,
					newgame->wall.img0.reference, j * 64, i * 64);
			else
				mlx_put_image_to_window(newgame->mlx, newgame->window,
					newgame->floor.img0.reference, j * 64, i * 64);
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
				mlx_put_image_to_window(newgame->mlx, newgame->window,
					newgame->collectible.img0.reference, j * 64, i * 64);
			else if (newgame->map[i][j] == 'P')
				mlx_put_image_to_window(newgame->mlx, newgame->window,
					newgame->player.currentimg.reference, j * 64, i * 64);
			else if (newgame->map[i][j] == 'E')
				mlx_put_image_to_window(newgame->mlx, newgame->window,
					newgame->exit.img0.reference, j * 64, i * 64);
			j++;
		}
		i++;
	}
}

void	update_player_frame(t_game *newgame)
{
	newgame->player.currentimg.reference = newgame->player.img0.reference;
	if (newgame->player.framecount > 5 && newgame->player.framecount < 35)
		newgame->player.currentimg.reference = newgame->player.img1.reference;
	else if (newgame->player.framecount >= 60)
		newgame->player.framecount = 0;
	newgame->player.framecount++;
}

int	update_screen(t_game *newgame)
{
	mlx_clear_window(newgame->mlx, newgame->window);
	draw_map(newgame);
	update_player_frame(newgame);
	draw_player_and_collectibles(newgame);
	return (1);
}
