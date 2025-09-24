/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:13:10 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/09/24 18:55:48 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_server(int signal, siginfo_t *info, void *context)
{
	static char		c;
	static int		bit;
	static pid_t	pid_client;

	(void)context;
	if (info->si_pid != 0)
		pid_client = info->si_pid;
	if (signal == SIGUSR1)
		c |= (0b10000000 >> bit);
	else if (signal == SIGUSR2)
		c &= ~(0b10000000 >> bit);
	bit++;
	if (bit == __CHAR_BIT__)
	{
		bit = 0;
		if (c == OVER)
		{
			write (1, "\n", 1);
			kill(pid_client, SIGUSR2);
			return ;
		}
		write (1, &c, 1);
	}
	kill(pid_client, SIGUSR1);
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = handle_server;
	sa.sa_flags = SA_SIGINFO;
	sigempty(&sa.sa_mask);
	ft_printf("Server ' s PID is: %i\n", getpid());
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
}
