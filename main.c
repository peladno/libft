/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 13:54:32 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/27 22:46:16 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <ctype.h>
#include <string.h>

// make && cc main.c -lbsd libft.a -I. -o test && ./test
// TODO unpush main.c before reviews

static void	print_result(char *name, int ok)
{
	printf("%-15s: %s\n", name, ok ? "OK" : "FAIL");
}

int	main(void)
{
	char buf1[50];
	char buf2[50];
	char *ptr;
	char *dup;
	char *sub;
	char *join;
	int *arr;
	char *res;
	char *strim;

	printf("\n=== CHAR FUNCTIONS ===\n");

	print_result("isalpha", (ft_isalpha('A') != 0) == (isalpha('A') != 0));

	print_result("isdigit", (ft_isdigit('7') != 0) == (isdigit('7') != 0));

	print_result("isalnum", (ft_isalnum('9') != 0) == (isalnum('9') != 0));

	print_result("isascii", (ft_isascii(127) != 0) == (isascii(127) != 0));

	print_result("isprint", (ft_isprint(' ') != 0) == (isprint(' ') != 0));

	print_result("toupper", ft_toupper('a') == toupper('a'));

	print_result("tolower", ft_tolower('Z') == tolower('Z'));

	printf("\n=== STRING FUNCTIONS ===\n");
	print_result("strlen", ft_strlen("hello") == strlen("hello"));
	print_result("strncmp", ft_strncmp("abc", "abd", 3) == strncmp("abc", "abd",
			3));
	print_result("atoi", ft_atoi("   -42abc") == atoi("   -42abc"));

	ptr = ft_strchr("hello", 'l');
	print_result("strchr", ptr && strcmp(ptr, "llo") == 0);

	ptr = ft_strrchr("hello", 'l');
	print_result("strrchr", ptr && strcmp(ptr, "lo") == 0);

	ptr = ft_strnstr("hello world", "world", 11);
	print_result("strnstr", ptr && strcmp(ptr, "world") == 0);

	dup = ft_strdup("libft");
	print_result("strdup", dup && strcmp(dup, "libft") == 0);
	free(dup);

	sub = ft_substr("hello world", 6, 5);
	print_result("substr", sub && strcmp(sub, "world") == 0);
	free(sub);

	join = ft_strjoin("hello ", "world");
	print_result("strjoin", join && strcmp(join, "hello world") == 0);
	free(join);

	printf("\n=== STRLCPY / STRLCAT ===\n");
	memset(buf1, 0, sizeof(buf1));
	memset(buf2, 0, sizeof(buf2));

	ft_strlcpy(buf1, "hello", sizeof(buf1));
	strlcpy(buf2, "hello", sizeof(buf2));
	print_result("strlcpy", strcmp(buf1, buf2) == 0);

	ft_strlcat(buf1, " world", sizeof(buf1));
	strlcat(buf2, " world", sizeof(buf2));
	print_result("strlcat", strcmp(buf1, buf2) == 0);

	printf("\n=== MEMORY FUNCTIONS ===\n");
	memset(buf1, 'A', 10);
	ft_memset(buf2, 'A', 10);
	print_result("memset", memcmp(buf1, buf2, 10) == 0);

	strcpy(buf1, "hello");
	ft_bzero(buf1, 2);
	print_result("bzero", buf1[0] == '\0' && buf1[1] == '\0' && buf1[2] == 'l');

	memset(buf1, 0, sizeof(buf1));
	memset(buf2, 0, sizeof(buf2));
	memcpy(buf1, "abcdef", 7);
	ft_memcpy(buf2, "abcdef", 7);
	print_result("memcpy", strcmp(buf1, buf2) == 0);

	strcpy(buf1, "abcdef");
	ft_memmove(buf1 + 2, buf1, 4);
	print_result("memmove", strcmp(buf1, "ababcd") == 0);

	ptr = ft_memchr("abcdef", 'd', 6);
	print_result("memchr", ptr && *(char *)ptr == 'd');

	print_result("memcmp", ft_memcmp("abc", "abd", 3) == memcmp("abc", "abd",
			3));

	arr = ft_calloc(5, sizeof(int));
	print_result("calloc", arr && arr[0] == 0 && arr[4] == 0);
	free(arr);

	strim = ft_strtrim("xxholaxx", "x");
	print_result("strtrim 2", strim && strcmp(strim, "hola") == 0);
	free(strim);

	return (0);
}