/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:24 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/10 11:27:21 by dcarassi         ###   ########.fr       */
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
	if (argc != 2)
		return(1 * ft_printf("Need a .ber file to start"));
	game.map = init_map(argv[1], &game);
	if (!game.map)
		return (1);
	print_mat(game.map);
	return (0);
}
