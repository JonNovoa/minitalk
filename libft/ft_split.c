/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:33:56 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/23 18:32:27 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*next_word(char const **s, char c)
{
	const char	*start;
	size_t		len;

	while (**s && **s == c)
		(*s)++;
	start = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - start;
	return (ft_substr(start, 0, len));
}

static void	free_split(char **res, size_t i)
{
	while (i > 0)
	{
		i--;
		free(res[i]);
	}
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	words;

	if (!s)
		return (0);
	words = count_words(s, c);
	res = malloc((words + 1) * sizeof(char *));
	if (!res)
		return (0);
	i = 0;
	while (i < words)
	{
		res[i] = next_word(&s, c);
		if (!res[i])
		{
			free_split(res, i);
			return (0);
		}
		i++;
	}
	res[i] = 0;
	return (res);
}

/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char **s = ft_split("Hola Mundo", ' ');
	printf("%s\n", s[0]);
	printf("%s\n", s[1]);
	for (int i = 0; s[i]; i++)
		free(s[i]);
	free(s);
	return (0);
}
*/
