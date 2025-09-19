/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:23:24 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/23 14:58:50 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len--)
		*p++ = (unsigned char)c;
	return (b);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void) {
    char buf[6] = "AAAAA";
    ft_memset(buf, 'x', 5);
    printf("%s\n", buf);
    return 0;
}
*/