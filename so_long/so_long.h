/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:33 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/17 14:44:10 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx_opengl_20191021/mlx.h"
# include "ft_printf/ft_printf.h"
# include "ft_get_next_line/get_next_line.h"
# include <stdio.h>
# include <fcntl.h>

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
	void		*window;
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

void	*ft_calloc(size_t nmeb, size_t size);
char	*ft_strdup(const char *s);
void	ft_bzero(void *str, size_t n);
void	*ft_memset(void *str, int c, size_t n);
int		ft_check_mapextension(char *file);
char	**init_map(char *file, t_game *game);
void	setup_sprites(t_game *new_game);
void	init_game(char *file, t_game *new_game);
int		update_screen(t_game *newgame);
int		get_input(int key, t_game *newgame);
int		get_map_lines(char *file);
int		get_map_columns(char *file);
void	wrong_map(void);

#endif
