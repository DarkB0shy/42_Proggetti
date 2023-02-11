/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:33 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/11 12:31:16 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx_opengl_20191021/mlx.h"
# include "ft_printf/ft_printf.h"
# include "ft_get_next_line/get_next_line.h"
# include <stdio.h>
# include <fcntl.h>

# define IMG_SIZE 32

typedef struct s_game
{
	void	*mlx;
	void	*win;
	int		loop;
	int		width;
	int		heigth;
	char	**map;
	void	*wall_img;
	void	*nonwall_img;
	void	*collectible_img;
	void	*boshy_img;
	void	*exit_img;
	int		collectibles;
}	t_game;

char	**init_map(char *file, t_game *game);

#endif
