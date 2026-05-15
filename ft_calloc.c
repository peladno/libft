/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:26:14 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/13 21:46:29 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_calloc(size_t count, size_t size)
// {
// 	void	*arr;

// 	if (size != 0 && count > SIZE_MAX / size)
// 		return (NULL);
// 	arr = malloc(count * size);
// 	if (!arr)
// 		return (NULL);
// 	ft_bzero(arr, count * size);
// 	return (arr);
// }

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
//TODO check is that ok
	if (count == 0 || size == 0)
	{
		arr = malloc(1);
		if (!arr)
			return (NULL);
		return (arr);
	}

	arr = malloc(count * size);
	if (!arr)
		return (NULL);

	ft_bzero(arr, count * size);

	return (arr);
}