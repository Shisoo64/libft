/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:30:02 by rlaforge          #+#    #+#             */
/*   Updated: 2022/10/19 18:09:13 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pf_puthex(unsigned long long nb)
{
	int			len;
	const char	base[] = "0123456789abcdef";

	len = 0;
	if (nb <= 15)
		len += write(1, &base[nb], 1);
	if (nb > 15)
	{
		len += ft_pf_puthex(nb / 16);
		len += ft_pf_puthex(nb % 16);
	}
	return (len);
}

int	ft_pf_putptr(unsigned long long ptr)
{
	int	len;

	if (!ptr)
		return (ft_pf_putstr("(nil)"));
	len = 0;
	len += ft_pf_putstr("0x");
	len += ft_pf_puthex(ptr);
	return (len);
}
