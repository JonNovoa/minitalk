/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:20:40 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/29 14:52:45 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
#include <stdio.h>

int main(void)
{
	t_list *list = NULL;

	ft_lstadd_front(&list, ft_lstnew("Tercero"));
	ft_lstadd_front(&list, ft_lstnew("Segundo"));
	ft_lstadd_front(&list, ft_lstnew("Primero"));

	printf("Tamaño de la lista: %d\n", ft_lstsize(list)); // Debería imprimir 3

	return (0);
}
	*/