/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:33:48 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/13 14:47:11 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	assign_sprite(t_game *new_game, t_image *image, char *str)
{
	image->reference = mlx_xpm_file_to_image(new_game->mlx, str, &image->size.x, &image->size.y);
}

void	set_sprite_size(t_game *new_game)
{
	new_game->wall.img0.size.x = 64;
	new_game->wall.img0.size.y = 64;
}

void	setup_sprites(t_game *new_game)
{
	set_sprite_size(new_game);
	assign_sprite(new_game, &new_game->player.img0, "Spritez/boshy.xpm");
	assign_sprite(new_game, &new_game->collectible.img0, "Spritez/collectible.xpm");
	assign_sprite(new_game, &new_game->floor.img0, "Spritez/empty.xpm");
	assign_sprite(new_game, &new_game->wall.img0, "Spritez/viola1.xpm");
}