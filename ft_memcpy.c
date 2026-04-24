/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 21:47:12 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/24 14:16:58 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	s = src;
	d = dest;
	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
	// just return the pointer of dest not d. d is already moved.
}

// #include <string.h> // para comparar con memcpy original

// int	main(void)
// {
// 	char	src[] = "hola mundo";
// 	char	dest1[20];
// 	char	dest2[20];
// 	int		a[] = {1, 2, 3};
// 	int		b[3];
// 	int		c[3];

// 	// 🔹 Test 1: copiar string
// 	ft_memcpy(dest1, src, 11);
// 	memcpy(dest2, src, 11);
// 	printf("Test 1:\n");
// 	printf("ft_memcpy: %s\n", dest1);
// 	printf("memcpy   : %s\n\n", dest2);
// 	// 🔹 Test 2: copiar parcial
// 	ft_memcpy(dest1, src, 4);
// 	memcpy(dest2, src, 4);
// 	dest1[4] = '\0';
// 	dest2[4] = '\0';
// 	printf("Test 2 (partial):\n");
// 	printf("ft_memcpy: %s\n", dest1);
// 	printf("memcpy   : %s\n\n", dest2);
// 	// 🔹 Test 3: copiar ints
// 	ft_memcpy(b, a, sizeof(a));
// 	memcpy(c, a, sizeof(a));
// 	printf("Test 3 (int array):\n");
// 	printf("ft_memcpy: %d %d %d\n", b[0], b[1], b[2]);
// 	printf("memcpy   : %d %d %d\n\n", c[0], c[1], c[2]);
// 	// 🔹 Test 4: len = 0
// 	ft_memcpy(dest1, src, 0);
// 	memcpy(dest2, src, 0);
// 	printf("Test 4 (len = 0):\n");
// 	printf("ft_memcpy: %s\n", dest1);
// 	printf("memcpy   : %s\n\n", dest2);
// 	return (0);
// }
