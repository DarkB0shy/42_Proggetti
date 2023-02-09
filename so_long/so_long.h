/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:40:33 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/09 14:56:44 by dcarassi         ###   ########.fr       */
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
	void	*mlx_ptr;
	void	*win_ptr;
	int		width;
	int		heigth;
	char	**map;
}	t_game;

char	**init_map(char *file, t_game *game);

#endif
