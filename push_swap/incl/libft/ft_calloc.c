/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:31:12 by robegarc          #+#    #+#             */
/*   Updated: 2023/01/17 09:43:40 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*mem;

	mem = (void *)malloc(n * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (n * size));
	return (mem);
}
