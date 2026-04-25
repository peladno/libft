/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 00:04:45 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/25 15:19:00 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

// TODO delete main.c and libfttester
int	main(void)
{
	// ft_memset
	char str1[10];
	ft_memset(str1, 'A', 5);
	str1[5] = '\0';
	printf("ft_memset: %s\n", str1);

	// ft_memchr
	char str[] = "hola mundo";
	char *res1;
	res1 = ft_memchr(str, 'o', 10);
	printf("ft_memchr: %s\n", res1);
	printf("\n");

	// ft_strchr
	printf("ft_strchr:\n");
	char *res = ft_strchr("hola", 'o');
	printf("%s\n", res);

	// ft_strdup
	char *src = "hola mundo";
	char *dup1;
	char *dup2;

	dup1 = ft_strdup(src);
	dup2 = strdup(src);

	printf("ft_strdup: %s\n", dup1);

	dup1[0] = 'H';

	char *empty = "";
	char *dup_empty = ft_strdup(empty);

	printf("ft_strdup(empty): '%s'\n\n", dup_empty);

	free(dup1);
	free(dup2);
	free(dup_empty);

	return (0);
}