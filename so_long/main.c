/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:24 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/09 19:20:15 by dcarassi         ###   ########.fr       */
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
		return(1 * ft_printf("Need a .ber file to start"));
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
	print_mat(game.map);
	mlx_loop(mlx_ptr);
	return (0);
}
