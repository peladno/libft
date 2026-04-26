/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:26:14 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/26 10:33:45 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO test
void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	arr = malloc(count * size);
	if (!arr)
	{
		return (NULL);
	}
	ft_bzero(arr, (count * size));
	return (arr);
}
