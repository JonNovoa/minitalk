/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:10:30 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/23 15:10:35 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('z'));
	return (0);
}
*/
