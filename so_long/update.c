/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:16:55 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/13 17:47:31 by dcarassi         ###   ########.fr       */
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
				mlx_put_image_to_window(newgame->mlx, newgame->window->reference, newgame->wall.img0.reference, j * 64, i * 64);
			else
				mlx_put_image_to_window(newgame->mlx, newgame->window->reference, newgame->floor.img0.reference, j * 64, i * 64);
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
			{
				mlx_put_image_to_window(newgame->mlx, newgame->window->reference, newgame->collectible.img0.reference, j * 64, i * 64);
				newgame->collectible.nb += 1;
			}
			else if (newgame->map[i][j] == 'P')
			{
				mlx_put_image_to_window(newgame->mlx, newgame->window->reference, newgame->player.img0.reference, j * 64, i * 64);
				newgame->player.pos.x = i;
				newgame->player.pos.y = j;
			}
			j++;
		}
		i++;
	}
}

int	update_screen(t_game *newgame)
{
	mlx_clear_window(newgame->mlx, newgame->window->reference);
	draw_map(newgame);
	draw_player_and_collectibles(newgame);
	return (1);
}