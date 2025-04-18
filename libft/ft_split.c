/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:05:54 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/04/19 00:00:25 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		free_all(char **arr);

static char		**aloc_w(const char *s, char c, size_t words);

static int		fill_words(const char *s, char c, size_t words, char **res);

static size_t	cw(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char		**res;
	size_t		words;

	if (!s)
		return (NULL);
	words = cw(s, c);
	res = aloc_w(s, c, words);
	if (!res)
		return (NULL);
	return (res);
}

void	free_all(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static char	**aloc_w(const char *s, char c, size_t words)
{
	char	**res;
	size_t	i;

	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	i = 0;
	if (!fill_words(s, c, words, res))
	{
		free_all(res);
		return (NULL);
	}
	return (res);
}

static int	fill_words(const char *s, char c, size_t words, char **res)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i] && j < words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			res[j] = ft_substr(s, start, i - start);
			if (!res[j])
				return (0);
			j++;
		}
	}
	res[j] = NULL;
	return (1);
}

static size_t	cw(const char *s, char c)
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

// int	main()
// {
// 	char	**matrix;
// 	int		i;

// 	matrix = ft_split("Depois de 2 dias de luta para concluir.", ' ');
// 	i = 0;
// 	while (matrix[i])
// 	{
// 		printf("%s\n", matrix[i]);
// 		i++;
// 	}
// 	i = -1;
// 	while (matrix[++i])
// 		free(matrix[i]);
// 	free(matrix);
// }