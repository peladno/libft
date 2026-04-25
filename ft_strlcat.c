/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:31:14 by javierperez       #+#    #+#             */
/*   Updated: 2026/04/25 15:55:12 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	total_len;
	unsigned int	i;

	len_dest = 0;
	len_src = 0;
	total_len = 0;
	i = 0;
	while (dst[len_dest])
		len_dest++;
	while (src[len_src])
		len_src++;
	if (dstsize <= len_dest)
		total_len = len_src + dstsize;
	else
		total_len = len_src + len_dest;
	while (src[i] != '\0' && (len_dest + 1) < dstsize)
	{
		dst[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dst[len_dest] = '\0';
	return (total_len);
}
