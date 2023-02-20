/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilz.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:11:25 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/17 16:31:07 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	wrong_map(void)
{
	ft_printf("Wrong map\n");
	exit(0);
}

int	get_map_lines(char *file)
{
	int	byte_read;
	int	lines;
	int	fd;
	int	buffer;

	lines = 1;
	fd = open(file, O_RDONLY);
	if (!fd)
		return (0);
	byte_read = 1;
	buffer = 0;
	while (byte_read > 0)
	{
		if (buffer == '\n')
			lines++;
		byte_read = read(fd, &buffer, 1);
	}
	close (fd);
	return (lines);
}

int	get_map_columns(char *file)
{
	int	byte_read;
	int	columns;
	int	fd;
	int	buffer;

	columns = 1;
	fd = open(file, O_RDONLY);
	if (!fd)
		return (0);
	byte_read = read(fd, &buffer, 1);
	while (byte_read > 0)
	{
		if (buffer != '\n')
		{
			columns++;
			byte_read = read(fd, &buffer, 1);
		}
		else
		{
			close (fd);
			byte_read = -1;
		}
	}
	close (fd);
	return (columns);
}
