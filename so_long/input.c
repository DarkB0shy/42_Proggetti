/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:39:22 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/15 18:04:26 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_game *newgame)
{
	if (newgame->map[newgame->player.pos.y - 1][newgame->player.pos.x] == '1')
		;
	else
	{
		newgame->player.pos.y--;
		if (newgame->map[newgame->player.pos.y][newgame->player.pos.x] == 'C')
		{
			newgame->collectible.nb--;
			newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
			newgame->map[newgame->player.pos.y + 1][newgame->player.pos.x ] = '0';
		}
		newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
		newgame->map[newgame->player.pos.y + 1][newgame->player.pos.x] = '0';
		newgame->nbmoves++;
	}
}

void	move_down(t_game *newgame)
{
	if (newgame->map[newgame->player.pos.y + 1][newgame->player.pos.x] == '1')
		;
	else
	{
		newgame->player.pos.y++;
		if (newgame->map[newgame->player.pos.y][newgame->player.pos.x] == 'C')
		{
			newgame->collectible.nb--;
			newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
			newgame->map[newgame->player.pos.y - 1][newgame->player.pos.x] = '0';
		}
		newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
		newgame->map[newgame->player.pos.y - 1][newgame->player.pos.x] = '0';
		newgame->nbmoves++;
	}
}

void	move_right(t_game *newgame)
{
	if (newgame->map[newgame->player.pos.y][newgame->player.pos.x + 1] == '1')
		;
	else
	{
		newgame->player.pos.x++;
		if (newgame->map[newgame->player.pos.y][newgame->player.pos.x] == 'C')
		{
			newgame->collectible.nb--;
			newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
			newgame->map[newgame->player.pos.y][newgame->player.pos.x - 1] = '0';
		}
		else
		{
		newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
		newgame->map[newgame->player.pos.y][newgame->player.pos.x - 1] = '0';
		newgame->nbmoves++;
		}
	}
}

void	move_left(t_game *newgame)
{
	if (newgame->map[newgame->player.pos.y][newgame->player.pos.x - 1] == '1')
		;
	else
	{
		newgame->player.pos.x--;
		if (newgame->map[newgame->player.pos.y][newgame->player.pos.x] == 'C')
		{
			newgame->collectible.nb--;
			newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
			newgame->map[newgame->player.pos.y][newgame->player.pos.x + 1] = '0';
		}
		newgame->map[newgame->player.pos.y][newgame->player.pos.x] = 'P';
		newgame->map[newgame->player.pos.y][newgame->player.pos.x + 1] = '0';
		newgame->nbmoves++;
	}
}

int	get_input(int key, t_game *newgame)
{
	// printf("%d\n", key);
	// ft_printf("\n%d\n", newgame->player.pos.x);
	// ft_printf("%d\n", newgame->player.pos.y);
	ft_printf("%d\n", newgame->collectible.nb);
	if (key == 53)
		exit(2);
	else if (key == 126)
		move_up(newgame);
	else if (key == 123)
		move_left(newgame);
	else if (key == 125)
		move_down(newgame);
	else if (key == 124)
		move_right(newgame);
	return (0);
}