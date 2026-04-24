/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:42:07 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/24 14:17:17 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (0);
}

// #include <string.h>

// void	*ft_memchr(const void *s, int c, size_t n);

// int	main(void)
// {
// 	char str[] = "hola mundo";
// 	char data[] = {'a', 'b', '\0', 'c', 'd'};

// 	char *res1;
// 	char *res2;

// 	res1 = ft_memchr(str, 'c', 10);
// 	res2 = memchr(str, 'c', 10);

// 	return (0);
// }