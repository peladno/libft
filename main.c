/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 15:17:23 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/16 17:58:23 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <fcntl.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

// make && cc main.c -lbsd libft.a -I. -o test && ./test

static void	print_result(char *name, int ok)
{
	printf("%-20s: %s\n", name, ok ? "OK" : "FAIL");
}

static char	to_upper_map(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

static void	to_upper_iter(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

static void	free_split(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

static int	compare_split(char **res, char **expected)
{
	int	i;

	i = 0;
	if (!res || !expected)
		return (0);
	while (res[i] && expected[i])
	{
		if (strcmp(res[i], expected[i]) != 0)
			return (0);
		i++;
	}
	return (res[i] == NULL && expected[i] == NULL);
}

static void	del_content(void *content)
{
	free(content);
}

static void	*dup_content(void *content)
{
	return (ft_strdup((char *)content));
}

static void	upper_content(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
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
	char *strim;
	char **split_res;

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
	print_result("bzero", buf1[0] == '\0' && buf1[1] == '\0');

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

	void *big = ft_calloc(SIZE_MAX, SIZE_MAX);
	print_result("calloc overflow", big == NULL);

	strim = ft_strtrim("xxholaxx", "x");
	print_result("strtrim", strim && strcmp(strim, "hola") == 0);
	free(strim);

	printf("\n=== SPLIT TESTS ===\n");
	char *exp1[] = {"libft", "piscine", "core", NULL};
	split_res = ft_split("libft piscine core", ' ');
	print_result("split 1", compare_split(split_res, exp1));
	free_split(split_res);

	printf("\n=== STRMAPI TESTS ===\n");
	char *mapi = ft_strmapi("hello", to_upper_map);
	print_result("strmapi", strcmp(mapi, "HELLO") == 0);
	free(mapi);

	printf("\n=== FD FUNCTIONS ===\n");
	int fd;
	char buffer[100];
	int bytes;

	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putchar_fd('A', fd);
	close(fd);

	fd = open("test.txt", O_RDONLY);
	bytes = read(fd, buffer, 1);
	buffer[bytes] = '\0';
	close(fd);

	print_result("putchar_fd", bytes == 1 && buffer[0] == 'A');

	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putstr_fd("hello", fd);
	close(fd);

	fd = open("test.txt", O_RDONLY);
	bytes = read(fd, buffer, 5);
	buffer[bytes] = '\0';
	close(fd);

	print_result("putstr_fd", strcmp(buffer, "hello") == 0);

	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putendl_fd("hello", fd);
	close(fd);

	fd = open("test.txt", O_RDONLY);
	bytes = read(fd, buffer, 6);
	buffer[bytes] = '\0';
	close(fd);

	print_result("putendl_fd", strcmp(buffer, "hello\n") == 0);

	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putnbr_fd(-2147483648, fd);
	close(fd);

	fd = open("test.txt", O_RDONLY);
	bytes = read(fd, buffer, 11);
	buffer[bytes] = '\0';
	close(fd);

	print_result("putnbr INT_MIN", strcmp(buffer, "-2147483648") == 0);

	char str_iter[] = "hello";

	ft_striteri(str_iter, to_upper_iter);
	print_result("striteri", strcmp(str_iter, "HELLO") == 0);

	printf("\n=== LIST TESTS ===\n");

	t_list *lst;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *last;
	t_list *mapped;
	char *str1;
	char *str2;
	char *str3;

	lst = NULL;

	str1 = strdup("one");
	str2 = strdup("two");
	str3 = strdup("three");

	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);

	print_result("lstnew", node1 && strcmp(node1->content, "one") == 0);

	ft_lstadd_front(&lst, node1);
	print_result("add_front", lst == node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	last = ft_lstlast(lst);
	print_result("add_back", last && strcmp(last->content, "three") == 0);

	print_result("lstsize", ft_lstsize(lst) == 3);

	ft_lstiter(lst, upper_content);
	print_result("lstiter", strcmp(lst->content, "ONE") == 0
		&& strcmp(lst->next->content, "TWO") == 0
		&& strcmp(lst->next->next->content, "THREE") == 0);

	mapped = ft_lstmap(lst, dup_content, del_content);

	print_result("lstmap", mapped && strcmp(mapped->content, "ONE") == 0
		&& strcmp(mapped->next->content, "TWO") == 0);

	t_list *tmp_node;
	char *tmp_str;

	tmp_str = strdup("delete me");
	tmp_node = ft_lstnew(tmp_str);
	ft_lstdelone(tmp_node, del_content);
	print_result("lstdelone", 1);
	ft_lstclear(&lst, del_content);
	print_result("lstclear", lst == NULL);

	ft_lstclear(&mapped, del_content);
	return (0);
}