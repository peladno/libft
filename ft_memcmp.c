/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:42:42 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/23 23:06:30 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str2 = (unsigned char *)s2;
	str1 = (unsigned char *)s1;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
// #include <string.h>

// int	main(void)
// {
// 	int		res;
// 	int		res2;
// 	char	s1[10] = "geeks";
// 	char	s2[10] = "greeks";

// 	res = 0;
// 	res2 = 0;
// 	res = memcmp(s1, s2, strlen(s1));
// 	res2 = ft_memcmp(s1, s2, strlen(s1));
// 	printf("res %d\n", res);
// 	printf("res 2 %d", res2);
// 	return (0);
// }
