/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danil <danil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:29:39 by ogranger          #+#    #+#             */
/*   Updated: 2021/11/09 21:00:39 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_and_return_null(char **arr)
{
	size_t	i;

	i = 0;

	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static size_t	get_words_cnt(char const *s, char c)
{
	size_t	i;
	size_t	words_cnt;

	if (!s[0])
		return (0);
	i = 0;
	words_cnt = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			words_cnt++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		words_cnt++;
	return (words_cnt);
}

static void	get_next_word(char **next_word, size_t *next_word_len, char c)
{
	size_t	i;

	*next_word += *next_word_len;
	*next_word_len = 0;
	i = 0;
	while (**next_word && **next_word == c)
		(*next_word)++;
	while ((*next_word)[i])
	{
		if ((*next_word)[i] == c)
			return ;
		(*next_word_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	curr_word;
	size_t	words_cnt;
	size_t	next_word_len;
	char	*next_word;
	char	**ret;

	words_cnt = get_words_cnt(s, c);
	ret = (char **)malloc(sizeof(char *) * (words_cnt + 1));
	if (ret == NULL)
		return (NULL);
	curr_word = 0;
	next_word = (char *)s;
	next_word_len = 0;
	while (curr_word < words_cnt)
	{
		get_next_word(&next_word, &next_word_len, c);
		ret[curr_word] = (char *)malloc(sizeof(char) * (next_word_len + 1));
		if (ret[curr_word] == NULL)
			return (free_and_return_null(ret));
		ft_strlcpy(ret[curr_word], next_word, next_word_len + 1);
		curr_word++;
	}
	ret[curr_word] = NULL;
	return (ret);
}
