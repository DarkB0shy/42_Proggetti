/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:24 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/18 16:02:04 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		return (1 * ft_printf("Need a .ber file to start\n"));
	else
	{
		ft_check_mapextension(argv[1]);
		game.map = init_map(argv[1], &game);
		if (!game.map)
			return (1);
		init_game(argv[1], &game);
		setup_sprites(&game);
		update_screen(&game);
		mlx_loop(game.mlx);
	}
	return (0);
}
