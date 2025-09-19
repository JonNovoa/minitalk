/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:55:48 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/29 16:05:06 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void	multiply_by_two(void *content)
{
    *(int *)content *= 2;
}

#include <stdio.h>
int main()
{
    t_list *list = NULL;

    ft_lstadd_front(&list, ft_lstnew(&(int){1}));
    ft_lstadd_front(&list, ft_lstnew(&(int){2}));
    ft_lstadd_front(&list, ft_lstnew(&(int){3}));

    ft_lstiter(list, multiply_by_two);

    t_list *tmp = list;
    while (tmp)
    {
        printf("%d\n", *(int *)tmp->content);
        tmp = tmp->next;
    }

    ft_lstclear(&list, free);

    return 0;
} */
