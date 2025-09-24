/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 18:19:17 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/09/24 18:52:55 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>

volatile sig_atomic_t	g_flag;

void	send_char(pid_t pid_server, char c)
{
	int	bit;

	bit = 0;
	while (bit < CHAR_BIT)
	{
		if ((c & (0b10000000 >> bit)) != 0)
			kill(pid_server, SIGUSR1);
		else
			kill(pid_server, SIGUSR2);
		bit++;
		while (g_flag == 0)
			usleep(1);
		g_flag = 0;
	}
}

void	handler_client(int signal)
{
	if (signal == SIGUSR1)
		g_flag = 1;
	else if (signal == SIGUSR2)
	{
		ft_printf("Message is well received by Bonus server\n");
		exit(EXIT_SUCCESS);
	}
}

int	main(int argc, char *argv[])
{
	pid_t	pid_server;
	char	*message;

	if (argc != 3)
	{
		ft_printf("Usage: %s <Bonus Server's PID> \"message\"\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	pid_server = ft_atoi(argv[1]);
	message = argv[2];
	signal(SIGUSR1, handler_client);
	signal(SIGUSR2, handler_client);
	while (*message)
		send_char(pid_server, *message++);
	send_char(pid_server, OVER);
	return (EXIT_SUCCESS);
}
