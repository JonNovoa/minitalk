/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:14:11 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/23 15:14:16 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int *a = ft_calloc(5, sizeof(int));
	if (a)
	{
		for (int i = 0; i < 5; i++)
			printf("%d ", a[i]);
	}
	free(a);
	return (0);
}
*/
