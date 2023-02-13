/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:08:02 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/13 14:24:40 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_screen(t_game *newgame)
{
	int	map_linez = 0;
	int	i = 0;
	int	j;

	while (newgame->map[i] != NULL)
	{
		j = 0;
		while (j < ft_strlen(newgame->map[0]))
		{
			if (newgame->map[i][j] == '\n')
				map_linez++;
			j++;
		}
		i++;
	}
	newgame->win = mlx_new_window(newgame->mlx, (ft_strlen(newgame->map[0]) - 1) * 64, map_linez * 64, "so_long");
	// mlx_hook(windows->reference, 17, 0, ft_close, 0); per uscire dalla finestra
}

void	init_game(t_game *new_game)
{
	new_game->mlx = mlx_init();
	init_screen(new_game);
}