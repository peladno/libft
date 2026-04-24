/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 22:51:57 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/24 23:23:35 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
// #include <stdio.h>
// #include <string.h> // para comparar con memset real

// void	*ft_memset(void *b, int c, size_t len);

// int	main(void)
// {
// 	char str1[10];
// 	char str2[10];
// 	int i;

// 	// 🔹 Test 1: llenar con 'A'
// 	ft_memset(str1, 'A', 5);
// 	memset(str2, 'A', 5);

// 	str1[5] = '\0';
// 	str2[5] = '\0';

// 	printf("Test 1:\n");
// 	printf("ft_memset: %s\n", str1);
// 	printf("memset   : %s\n\n", str2);

// 	// 🔹 Test 2: llenar con 0
// 	ft_memset(str1, 0, 10);
// 	memset(str2, 0, 10);

// 	printf("Test 2 (zero):\n");
// 	for (i = 0; i < 10; i++)
// 		printf("%d ", str1[i]);
// 	printf("\n");

// 	for (i = 0; i < 10; i++)
// 		printf("%d ", str2[i]);
// 	printf("\n\n");

// 	// 🔹 Test 3: valor negativo
// 	ft_memset(str1, -1, 5);
// 	memset(str2, -1, 5);

// 	printf("Test 3 (-1):\n");
// 	for (i = 0; i < 5; i++)
// 		printf("%d ", (unsigned char)str1[i]);
// 	printf("\n");

// 	for (i = 0; i < 5; i++)
// 		printf("%d ", (unsigned char)str2[i]);
// 	printf("\n\n");

// 	// 🔹 Test 4: len = 0
// 	ft_memset(str1, 'X', 0);
// 	memset(str2, 'X', 0);

// 	printf("Test 4 (len=0):\n");
// 	printf("ft_memset: %s\n", str1);
// 	printf("memset   : %s\n", str2);

// 	return (0);
// }