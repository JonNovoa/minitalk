/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:38:13 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/29 13:56:28 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
	{
		return (NULL);
	}
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*node;
	int		x = 42;

	node = ft_lstnew(&x);
	if (node)
	{
		printf("Content: %d\n", *(int *)(node->content));
		printf("Next: %p\n", (void *)node->next);
	}
	else
		printf("Failed to create node\n");
	return (0);
}
*/
