/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:14:43 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/23 15:14:48 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(s1);
	dst = malloc(len + 1);
	if (!dst)
		return (0);
	ft_memcpy(dst, s1, len + 1);
	return (dst);
}

/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *copy = ft_strdup("hola");
	printf("%s\n", copy);
	free(copy);
	return (0);
}
*/
