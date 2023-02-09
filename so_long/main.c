/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:24 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/09 15:34:55 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main (int argc, char **argv)
{
	t_game	game;
	int		i;
	int		j;

	i = -1;
	void *mlx_ptr;
	void *win_ptr;
	game.heigth = 400;
	game.width = 400;
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, game.width, game.heigth, "title");
	if (argc != 2)
	{
		ft_printf("Wrong input");
		return(1);
	}
	while (++i < game.width)
	{
		j = -1;
		while (++j < game.heigth)
		{
			mlx_pixel_put(mlx_ptr, win_ptr, i, j, 0X00000);
		}
	}
	game.map = init_map(argv[1], &game);
	if (!game.map)
		return (1);
	mlx_loop(mlx_ptr);
	return (0);
}
