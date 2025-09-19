/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:24:56 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/23 14:59:26 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include "libft.h"
#include <stdio.h>

int main() {
    char buf[6] = "hello";
    ft_bzero(buf, 5);
    printf("%s\n", buf);  // (empty string)
    return 0;
}*/