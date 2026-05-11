/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:26:14 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/11 23:21:39 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	if (count == 0 || size == 0)
	{
		return (1);
	}
	arr = malloc(count * size);
	if (!arr)
	{
		return (NULL);
	}
	ft_bzero(arr, (count * size));
	return (arr);
}
