/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:43:26 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/29 16:07:32 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !*lst || !del)
	{
		return ;
	}
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/* 
#include "libft.h"

void del_content(void *content)
{
    free(content);
}

int main()
{
    t_list *list = NULL;

    ft_lstadd_front(&list, ft_lstnew(strdup("Primero")));
    ft_lstadd_front(&list, ft_lstnew(strdup("Segundo")));
    ft_lstadd_front(&list, ft_lstnew(strdup("Tercero")));

    t_list *tmp = list;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    ft_lstclear(&list, del_content);

    if (list == NULL)
    {
        printf("La lista ha sido limpiada y liberada correctamente.\n");
    }

    return 0;
} */
