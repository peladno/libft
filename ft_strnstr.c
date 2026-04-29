/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 10:55:47 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/29 16:34:37 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *stk, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;

	if (*ndl == '\0')
		return ((char *)stk);
	i = 0;
	while (stk[i] && i < len)
	{
		j = 0;
		while (ndl[j] && stk[i + j] && (i + j) < len && stk[i + j] == ndl[j])
		{
			j++;
		}
		if (ndl[j] == '\0')
			return ((char *)&stk[i]);
		i++;
	}
	return (NULL);
}
