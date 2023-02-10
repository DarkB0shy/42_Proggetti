/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:24 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/10 14:59:31 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_mat(char **mat)
{
	int	i;

	i = 0;
	while (mat[i] != NULL)
	{
		printf("%d -> %s\n", i, mat[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	t_game	game;

	void	*mlx;
	void	*img;
	void	*mlx_win;
	int	dim;

	if (argc != 2)
		return(1 * ft_printf("Need a .ber file to start\n"));
	else
	{
	game.mlx = mlx_init();
	game.map = init_map(argv[1], &game);
	if (!game.map)
		return (1);
	print_mat(game.map);
	dim = 64;
	game.win = mlx_new_window(game.mlx, 444, 444, "!");
	img = mlx_xpm_file_to_image(game.mlx, "Spritez/viola-1.png.xpm", &dim, &dim);
	mlx_put_image_to_window(game.mlx, game.win, img, 0, 0);
	mlx_loop(game.mlx);
	}
	return (0);
}
