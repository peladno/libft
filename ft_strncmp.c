/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:56:25 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/25 16:22:08 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
