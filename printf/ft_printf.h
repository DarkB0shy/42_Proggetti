/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 00:15:16 by dcarassi          #+#    #+#             */
/*   Updated: 2023/01/28 00:31:38 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		len_ptr(uintptr_t nb);
void	ft_put_ptr(uintptr_t nb);
int		ft_putptr(uintptr_t nb);
int		ft_get_u_len(unsigned int nb);
char	*ft_u_itoa(unsigned int nb);
int		ft_put_u_int(unsigned int nb);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_conversion(va_list vl, const char format);
int		ft_printf(const char *format, ...);
