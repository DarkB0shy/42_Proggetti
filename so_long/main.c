/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:24 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/13 16:41:56 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_mat(char **mat)
{
	int	i;

	i = 0;
	while (mat[i] != NULL)
	{
		ft_printf("%d -> %s\n", i, mat[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		return(1 * ft_printf("Need a .ber file to start\n"));
	else
	{
		game.map = init_map(argv[1], &game);
		if (!game.map)
			return (1);
		init_game(&game);
		setup_sprites(&game);
		update_screen(&game);
		mlx_loop(game.mlx); //always the last command
	// dim = 64;
	// game.win = mlx_new_window(game.mlx, 444, 444, "!");
	// mlx_put_image_to_window(game.mlx, game.win, img, 0, 0);
	// i = 0;
	// map_linez = 0;
	// while (game.map[i] != NULL)
	// {
	// 	j = 0;
	// 	while (j < ft_strlen(game.map[0]))
	// 	{
	// 		if (game.map[i][j] == '\n')
	// 			map_linez++;
	// 		j++;
	// 	}
	// 	i++;
	// }
	// game.win = mlx_new_window(game.mlx, ft_strlen(game.map[0]), map_linez, "so_long");
	// img = mlx_xpm_file_to_image(game.mlx, "Spritez/viola-1.png.xpm", &dim, &dim);
	// i = 0;
	// ft_printf("%d\n", map_linez);
	// ft_printf("%d\n", ft_strlen(game.map[0]) - 1);
	// game.win = mlx_new_window(game.mlx, ((ft_strlen(game.map[0]) - 1) * 64), (map_linez * 64), "so_long");
	// game.wall_img = mlx_xpm_file_to_image(game.mlx, "Spritez/viola1.xpm", &dim, &dim);
	// game.nonwall_img = mlx_xpm_file_to_image(game.mlx, "Spritez/empty.xpm", &dim, &dim);
	// game.collectible_img = mlx_xpm_file_to_image(game.mlx, "Spritez/collectible.xpm", &dim, &dim);
	// game.boshy_img = mlx_xpm_file_to_image(game.mlx, "Spritez/boshy.xpm", &dim, &dim);
	// while (game.map[i] != NULL)	// Walls and empty spaces
	// {
	// 	j = 0;
	// 	while (game.map[i][j])
	// 	{
	// 		if (game.map[i][j] == '1')
	// 			mlx_put_image_to_window(game.mlx, game.win, game.wall_img, j * 64, i * 64);
	// 		else
	// 			mlx_put_image_to_window(game.mlx, game.win, game.nonwall_img, j * 64, i * 64);
	// 		j++;
	// 	}
	// 	i++;
	// }
	// i = 0;
	// while (game.map[i] != NULL)	// Player collectibles and exit
	// {
	// 	j = 0;
	// 	while (game.map[i][j])
	// 	{
	// 		if (game.map[i][j] == 'C')
	// 			mlx_put_image_to_window(game.mlx, game.win, game.collectible_img, j * 64, i * 64);
	// 		if (game.map[i][j] == 'P')
	// 			mlx_put_image_to_window(game.mlx, game.win, game.boshy_img, j * 64, i * 64);
	// 		j++;
	// 	}
	// 	i++;
	// }
	}
	return (0);
}
