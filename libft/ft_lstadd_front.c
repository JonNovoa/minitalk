/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:57:02 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/29 14:44:20 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>
int main()
{
    t_list *list = NULL;
    
    ft_lstadd_front(&list, ft_lstnew("Primero"));
    ft_lstadd_front(&list, ft_lstnew("Segundo"));

    printf("%s\n", (char *)list->content);  // Imprime "Segundo"

    return 0;
}
*/