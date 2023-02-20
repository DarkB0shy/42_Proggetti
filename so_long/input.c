/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:39:22 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/20 11:53:02 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_game *newgame)
{
	if (newgame->map[newgame->player.pos.y - 1][newgame->player.pos.x] == '1' ||
	(newgame->map[newgame->player.pos.y - 1][newgame->player.pos.x] == 'E' &&
	newgame->collectible.nb != 0))
		;
	else
	{
		newgame->player.pos.y--;
		if (newgame->map[newgame->player.pos.y][newgame->player.pos.x] == 'C')
		{
			newgame->collectible.nb--;
			newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
			newgame->map[newgame->player.pos.y + 1]
			[newgame->player.pos.x] = '0';
		}
		if (newgame->map[newgame->player.pos.y]
			[newgame->player.pos.x] == 'E' && newgame->collectible.nb == 0)
			exit(2);
		newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
		newgame->map[newgame->player.pos.y + 1][newgame->player.pos.x] = '0';
		newgame->nbmoves++;
	}
}

void	move_down(t_game *newgame)
{
	if (newgame->map[newgame->player.pos.y + 1][newgame->player.pos.x] == '1' ||
	(newgame->map[newgame->player.pos.y + 1][newgame->player.pos.x] == 'E' &&
	newgame->collectible.nb != 0))
		;
	else
	{
		newgame->player.pos.y++;
		if (newgame->map[newgame->player.pos.y][newgame->player.pos.x] == 'C')
		{
			newgame->collectible.nb--;
			newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
			newgame->map[newgame->player.pos.y - 1]
			[newgame->player.pos.x] = '0';
		}
		if (newgame->map[newgame->player.pos.y]
			[newgame->player.pos.x] == 'E' && newgame->collectible.nb == 0)
			exit(2);
		newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
		newgame->map[newgame->player.pos.y - 1][newgame->player.pos.x] = '0';
		newgame->nbmoves++;
	}
}

void	move_right(t_game *newgame)
{
	if (newgame->map[newgame->player.pos.y][newgame->player.pos.x + 1] == '1' ||
	(newgame->map[newgame->player.pos.y][newgame->player.pos.x + 1] == 'E' &&
	newgame->collectible.nb != 0))
		;
	else
	{
		newgame->player.pos.x++;
		if (newgame->map[newgame->player.pos.y][newgame->player.pos.x] == 'C')
		{
			newgame->collectible.nb--;
			newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
			newgame->map[newgame->player.pos.y]
			[newgame->player.pos.x - 1] = '0';
		}
		if (newgame->map[newgame->player.pos.y]
			[newgame->player.pos.x] == 'E' && newgame->collectible.nb == 0)
			exit(2);
		newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
		newgame->map[newgame->player.pos.y][newgame->player.pos.x - 1] = '0';
		newgame->nbmoves++;
	}
}

void	move_left(t_game *newgame)
{
	if (newgame->map[newgame->player.pos.y][newgame->player.pos.x - 1] == '1' ||
	(newgame->map[newgame->player.pos.y][newgame->player.pos.x - 1] == 'E' &&
	newgame->collectible.nb != 0))
		;
	else
	{
		newgame->player.pos.x--;
		if (newgame->map[newgame->player.pos.y][newgame->player.pos.x] == 'C')
		{
			newgame->collectible.nb--;
			newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
			newgame->map[newgame->player.pos.y]
			[newgame->player.pos.x + 1] = '0';
		}
		if (newgame->map[newgame->player.pos.y]
			[newgame->player.pos.x] == 'E' && newgame->collectible.nb == 0)
			exit(2);
		newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
		newgame->map[newgame->player.pos.y][newgame->player.pos.x + 1] = '0';
		newgame->nbmoves++;
	}
}

int	get_input(int key, t_game *newgame)
{
	ft_printf("N moves: %d\n", newgame->nbmoves);
	if (key == 53)
		exit(2);
	else if (key == 126 || key == 13)
		move_up(newgame);
	else if (key == 123 || key == 0)
		move_left(newgame);
	else if (key == 125 || key == 1)
		move_down(newgame);
	else if (key == 124 || key == 2)
		move_right(newgame);
	return (0);
}
