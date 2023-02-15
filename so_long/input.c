/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:39:22 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/15 15:59:22 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// void	move_up(t_game *newgame)
// {
// 	if (newgame->map[newgame->player.pos.y - 1][newgame->player.pos.x] == 'C')
// 		newgame->collectible.nb -= 1;
// 	if (newgame->map[newgame->player.pos.y - 1][newgame->player.pos.x] == '1')
// 		;
// 	else
// 	{
// 		if (newgame->map[newgame->player.pos.y - 1][newgame->player.pos.x] == 'C')
// 			newgame->map[newgame->player.pos.y - 1][newgame->player.pos.x] = '0';
// 		newgame->player.pos.y -= 1;
// 	}
// }

void	move_right(t_game *newgame)
{
	if (newgame->map[newgame->player.pos.y][newgame->player.pos.x + 1] == 'C')
		newgame->collectible.nb -= 1;
	if (newgame->map[newgame->player.pos.y][newgame->player.pos.x + 1] == '1' || (newgame->map[newgame->player.pos.y][newgame->player.pos.x + 1] == 'E' && newgame->collectible.nb != 0))
		;
	else
	{
		if (newgame->map[newgame->player.pos.y][newgame->player.pos.x + 1] == 'C')
			newgame->map[newgame->player.pos.y][newgame->player.pos.x + 1] = '0';
		newgame->player.pos.x += 1;
		newgame->nbmoves++;
	}
}

int	get_input(int key, t_game *newgame)
{
	printf("%d\n", key);
	if (key == 53)
		exit(2);
	// else if (key == 126)
	// 	move_up(newgame);
	// else if (key == 123)
	// 	move_left(newgame);
	// else if (key == 125)
	// 	move_down(newgame);
	else if (key == 124)
		move_right(newgame);
	return (0);
}