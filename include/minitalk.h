/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 18:09:27 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/09/26 18:09:28 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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