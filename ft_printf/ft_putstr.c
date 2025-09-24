/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:17:19 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/05/05 19:23:10 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	len;

	if (!s)
	{
		return (write(1, "(null)", 6));
	}
	len = 0;
	while (s[len])
	{
		write(1, &s[len++], 1);
	}
	return (len);
}
/* 
int main(void)
{
    ft_putstr("Hello, World!");
    return 0;
} */