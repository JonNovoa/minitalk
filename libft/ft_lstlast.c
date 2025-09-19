/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:53:54 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/29 15:02:34 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
	{
		return (NULL);
	}
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/* #include <stdio.h>

int main(void)
{
	t_list *list = NULL;

	ft_lstadd_front(&list, ft_lstnew("Tercero"));
	ft_lstadd_front(&list, ft_lstnew("Segundo"));
	ft_lstadd_front(&list, ft_lstnew("Primero"));

	t_list *last = ft_lstlast(list);
	printf("Último nodo: %s\n", (char *)last->content);

	return (0);
} */
