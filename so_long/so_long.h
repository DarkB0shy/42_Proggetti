/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:33 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/13 17:41:30 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx_opengl_20191021/mlx.h"
# include "ft_printf/ft_printf.h"
# include "ft_get_next_line/get_next_line.h"
# include <stdio.h>
# include <fcntl.h>

# ifndef SIZE
#	define SIZE 64
# endif

typedef struct s_vector
{
	int	x;
	int	y;
}	t_vector;

typedef struct s_image
{
	void		*reference;
	t_vector	size;
	t_vector	pos;
	char		*pixels;
	int			bits_per_pixel;
	int			line_size;
	int			endian;
}	t_image;

typedef struct s_window
{
	void		*reference;
	char		*name;
	t_image		background;
	t_vector	size;
	t_vector	scale;
}	t_window;

typedef struct s_element
{
	int			framecount;
	int			nb;
	void		*reference;
	t_vector	pos;
	t_image		currentimg;
	t_image		img0;
	t_image		img1;
	t_image		img2;
	t_image		img3;
}	t_element;

typedef struct s_game
{
	char		**map;
	void		*mlx;
	t_window	*window;
	t_element	player;
	t_element	collectible;
	t_element	exit;
	t_element	floor;
	t_element	wall;
	int			nbmoves;
	char		*str;
	int			status;
	int			b;
	int			h;
}	t_game;

char	**init_map(char *file, t_game *game);
void	setup_sprites(t_game *new_game);
void	init_game(t_game *new_game);
int	update_frames(t_game *newgame);
int		update_screen(t_game *newgame);
int	get_input(int key, t_game *newgame);

#endif