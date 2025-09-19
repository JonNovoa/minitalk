/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:05:28 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/29 15:32:22 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/* 
void del_content(void *content)
{
    free(content);
}
#include <stdio.h>
int main()
{
    t_list *node1 = ft_lstnew(strdup("Primero"));
    t_list *node2 = ft_lstnew(strdup("Segundo"));
    t_list *node3 = ft_lstnew(strdup("Tercero"));

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    printf("Lista antes de eliminar:\n");
    t_list *tmp = node1;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    ft_lstdelone(node2, del_content);

    printf("\nLista después de eliminar 'Segundo':\n");
    tmp = node1;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    return 0;
} */