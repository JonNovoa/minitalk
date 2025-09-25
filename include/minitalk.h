
#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <signal.h>
# include <ft_printf.h>
# include <libft.h>
# include <limits.h> 

# define OVER 4

void	handle_server(int signal, siginfo_t *info, void *context);
void	send_char(pid_t pid_server, char c);
void	handler_client(int signal);
#endif