/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:46:07 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/23 18:01:00 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_handler(int signo, siginfo_t *info, void *context)
{
	static int	value;
	static int	bit_no;

	(void)context;
	if (signo == SIGUSR1)
		value += 1 << bit_no;
	bit_no++;
	if (bit_no == 8)
	{
		write(1, &value, 1);
		if (value == '\0')
			kill(info->si_pid, SIGUSR1);
		value = 0;
		bit_no = 0;
	}
}

void	quit_server(int i)
{
	(void)i;
	ft_printf("Server chiuso\n");
	exit(0);
}

int	main(void)
{
	struct sigaction	act;
	pid_t				pid;

	pid = getpid();
	ft_printf("Server attivo\nPID: %d\n", pid);
	act.sa_sigaction = &sig_handler;
	act.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	signal(SIGINT, &quit_server);
	sigemptyset(&act.sa_mask);
	while (1)
		pause();
}
