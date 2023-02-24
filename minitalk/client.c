/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:01:28 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/24 11:54:15 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_char(char c, int bit_no, int pid)
{
	while (bit_no < 8)
	{
		if ((c & (1 << bit_no)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit_no++;
		usleep(1200);
	}
}

void	check_bit(int pid, char *msg)
{
	int	i;
	int	bit_no;

	i = 0;
	while (msg[i])
	{
		bit_no = 0;
		send_char(msg[i], bit_no, pid);
		i++;
	}
}

void	sending_signal(int i)
{
	(void)i;
	ft_printf("Messaggio spedito al server");
}

int	main(int argc, char **argv)
{
	pid_t	c;

	c = 0;
	if (argc != 3)
	{
		ft_printf("Errore\nUtilizzo: ./client PID_SERVER MESSAGGIO\n");
		exit(0);
	}
	c = ft_atoi(argv[1]);
	signal(SIGUSR1, &sending_signal);
	check_bit(c, argv[2]);
	send_char('\n', 0, c);
	send_char('\0', 0, c);
}
