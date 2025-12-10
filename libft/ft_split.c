/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:57:00 by moel-han          #+#    #+#             */
/*   Updated: 2025/10/27 17:45:14 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	if (!set)
		return (0);
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	countwords(char const *str, char c)
{
	int	i;
	int	index;
	int	in_word;

	i = 0;
	index = 0;
	in_word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			in_word = 0;
		else if (!in_word)
		{
			index++;
			in_word = 1;
		}
		i++;
	}
	return (index);
}

static char	*get_word(char const *str, char c, int *index)
{
	int		len;
	int		j;
	char	*word;
	int		i;

	i = *index;
	len = 0;
	if (!str)
		return (NULL);
	while (str[i] && str[i] == c)
		i++;
	*index = i;
	while (str[len + i] && str[len + i] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (str[*index] && str[*index] != c)
		word[j++] = str[(*index)++];
	word[j] = '\0';
	return (word);
}

char	**free_words(char **words)
{
	int	i;

	i = 0;
	if (!words)
		return (NULL);
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		index;
	char	**words;
	int		len;

	if (!s)
		return (NULL);
	len = countwords(s, c);
	words = malloc(sizeof(char *) * (len + 1));
	if (!words)
		return (NULL);
	i = 0;
	index = 0;
	while (i < len)
	{
		words[i] = get_word(s, c, &index);
		if (!words[i])
			return (free_words(words));
		i++;
	}
	words[i] = NULL;
	return (words);
}
