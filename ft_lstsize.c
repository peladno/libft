/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:14:17 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/29 15:24:08 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*current;

	len = 0;
	if (!lst)
	{
		return (len);
	}
	current = lst;
	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
