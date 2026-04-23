/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 22:15:57 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/23 22:51:52 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void ft_lstadd_front(t_list **lst, t_list *new);
// TODO modify for the homework
#include "libft.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

// Crear un nuevo nodo
t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

t_node	*insert_frt(t_node *head, int value)
{
	t_node	*new;

	new = new_node(value);
	if (!new)
		return ;
	new->next = head;
	return (new);
}

void	print_list(t_node *head)
{
	t_node	*current;

	current = head;
	while (current)
	{
		printf("%d\n", current->value);
		current = current->next;
	}
}

void	free_list(t_node *head)
{
	t_node	*tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

int	main(void)
{
	t_node *head = insert_front(NULL, 20);
	t_node *head = insert_front(NULL, 10);
	t_node *head = insert_front(NULL, 5);

	// insert_front(&head, 20);
	// insert_front(&head, 10);
	// insert_front(&head, 5);

	print_list(head);

	free_list(head);

	return (0);
}