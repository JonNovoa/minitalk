/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:13:36 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/23 15:13:40 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	size_t	i;

	n_len = ft_strlen(needle);
	if (!n_len)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i + n_len <= len)
	{
		if (ft_strncmp(&haystack[i], needle, n_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}

/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strnstr("hello world", "world", 11));
	printf("%s\n", ft_strnstr("hello world", "world", 5));
	return (0);
}
*/
