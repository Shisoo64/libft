/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:56:36 by rlaforge          #+#    #+#             */
/*   Updated: 2022/04/18 15:56:37 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	unsnb;

	unsnb = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		unsnb = -n;
	}
	if (unsnb < 10)
		ft_putchar_fd(unsnb + '0', fd);
	else
	{
		ft_putnbr_fd(unsnb / 10, fd);
		ft_putchar_fd((unsnb % 10) + '0', fd);
	}
}
