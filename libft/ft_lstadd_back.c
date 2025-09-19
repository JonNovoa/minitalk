/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:59:48 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/29 18:04:27 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
	{
		return ;
	}
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
}

/* #include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("Hola");
	t_list	*node2 = ft_lstnew("Mundo");

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);

	while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
	return (0);
} */
