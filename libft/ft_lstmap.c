/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:11:41 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/29 16:20:35 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* void *ft_to_uppercase(void *content)
{
    char *str = (char *)content;
    for (int i = 0; str[i]; i++)
        str[i] = (char)toupper((unsigned char)str[i]);
    return str;
}

void ft_del(void *content)
{
    free(content);
}

int main()
{
    t_list *list = NULL;
    t_list *mapped_list = NULL;

    ft_lstadd_back(&list, ft_lstnew(strdup("hola")));
    ft_lstadd_back(&list, ft_lstnew(strdup("mundo")));

    mapped_list = ft_lstmap(list, ft_to_uppercase, ft_del);

    while (mapped_list)
    {
        printf("%s\n", (char *)mapped_list->content);
        mapped_list = mapped_list->next;
    }

    ft_lstclear(&list, ft_del);
    ft_lstclear(&mapped_list, ft_del);

    return 0;
} */