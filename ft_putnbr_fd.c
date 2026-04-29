/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:03:39 by jperez-u          #+#    #+#             */
/*   Updated: 2026/04/29 12:29:22 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	*base;

	base = "0123456789";
	nbr = n;
	if (n < 0)
	{
		nbr = -nbr;
		ft_putchar_fd('-', fd);
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	ft_putchar_fd(base[nbr % 10], fd);
}
