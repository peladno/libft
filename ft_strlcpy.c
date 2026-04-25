/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:44:45 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/25 15:55:08 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	len;

	len = 0;
	while (len < dstsize - 1 && src[len])
	{
		dst[len] = src[len];
		len++;
	}
	if (dstsize > 0)
	{
		dst[len] = '\0';
	}
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}
