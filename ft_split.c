/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:33:37 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/28 22:30:57 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	str_length(const char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

static int	count_words(char const *str, char const c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (count);
}

static char	*copy_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * ((end - start) + 1));
	i = 0;
	while (start < end)
		word[i++] = str[start++];
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;
	int		start;
	int		j;
	int		len;

	if (!s)
		return (NULL);
	matrix = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!matrix)
		return (NULL);
	i = 0;
	j = 0;
	len = str_length(s);
	while (i < len)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
			matrix[j++] = copy_word(s, start, i);
	}
	return (matrix[j] = NULL, matrix);
}
