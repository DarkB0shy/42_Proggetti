/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:33:48 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/15 14:50:29 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	assign_sprite(t_game *new_game, t_image *image, char *str)
{
	int	dimma;

	dimma = 64;
	image->reference = mlx_xpm_file_to_image(new_game->mlx, str, &dimma, &dimma);
}

void	setup_sprites(t_game *new_game)
{
	assign_sprite(new_game, &new_game->player.img0, "Spritez/boshy.xpm");
	assign_sprite(new_game, &new_game->collectible.img0, "Spritez/collectible.xpm");
	assign_sprite(new_game, &new_game->floor.img0, "Spritez/empty.xpm");
	assign_sprite(new_game, &new_game->wall.img0, "Spritez/viola1.xpm");
}