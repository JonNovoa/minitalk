/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:21:47 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/23 14:55:39 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void) {
    printf("%d\n", ft_isascii(128)); // 0
    printf("%d\n", ft_isascii(65));  // 1
    return 0;
}
*/