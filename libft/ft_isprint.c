/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:22:09 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/23 14:56:34 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void) {
    printf("%d\n", ft_isprint(' '));  // 1
    printf("%d\n", ft_isprint('\n')); // 0
    return 0;
}
	*/