/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:22:35 by dcarassi          #+#    #+#             */
/*   Updated: 2023/01/28 14:59:58 by dcarassi         ###   ########.fr       */
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
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_conversion(va_list vl, const char format);
int		ft_printf(const char *format, ...);
char	*ft_char(char *s, unsigned int number, int len);
int		ft_len(int n);
char	*ft_itoa(int n);
int		ft_putnbr(int n);
int		hex_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char formmat);
int		ft_puthex(unsigned int num, const char format);
int		ll_length(long long nb, int base);
int		ft_put_unsigned_nbr(unsigned int nb);

#endif
