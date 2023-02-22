/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:46:07 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/22 12:45:23 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(void)
{
	struct sigaction	act;
	pid_t				pid;

	pid = getpid();
	ft_printf("Server attivo\nPID: %d\n", pid);
}