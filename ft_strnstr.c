/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 10:55:47 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/26 11:31:46 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] && (i + j) < len && haystack[i
			+ j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	const char *haystack = "Hello, elworld!";
// 	const char *needle = "elworld";

// 	// Scenario 1: Search within first 13 characters (Success)
// 	char *ptr1 = ft_strnstr(haystack, needle, 15);
// 	if (ptr1)
// 		printf("Found: %s\n", ptr1); // Output: Found: world!

// 	return (0);
// }