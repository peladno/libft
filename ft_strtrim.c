/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 14:33:50 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/26 15:41:08 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO
#include "libft.h"

static int	check_set(char const c, char const *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

// return the array withouth the set charactes in the s1 adelanrte y atras del array
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	if (!s1 || !set)
	{
		return (NULL);
	}
}
