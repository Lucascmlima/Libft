/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:05:54 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/04/16 15:04:50 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	**res;

	i = 0;
	j = 0;
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res || !s)
		return (NULL);
	while (s[i] && j < count_words(s, c))
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			res[j++] = ft_substr(s, start, i - start);
		}
		else
			i++;
	}
	res[j] = NULL;
	return (res);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}
