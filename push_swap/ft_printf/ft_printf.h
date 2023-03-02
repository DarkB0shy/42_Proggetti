/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:10:36 by robegarc          #+#    #+#             */
/*   Updated: 2023/01/30 15:39:48 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

int		ft_putstr(char *s);
int		ft_putchar(int c);
int		print_int(int n);
int		ft_printf(const char *ptr, ...);
int		print_uint(unsigned int n);
int		print_hex(unsigned int n, const char ptr);
int		print_p(intptr_t n);

#endif
