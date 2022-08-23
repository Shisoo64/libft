/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:30:02 by rlaforge          #+#    #+#             */
/*   Updated: 2022/08/23 15:38:54 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i] != '\0' && str)
		i += write(1, &str[i], 1);
	return (i);
}

int	ft_putnbr_p(unsigned long long nb)
{
	int			len;
	const char	base[] = "0123456789abcdef";

	len = 0;
	if (nb <= 15)
		len += ft_putchar(base[nb]);
	if (nb > 15)
	{
		len += ft_putnbr_p(nb / 16);
		len += ft_putnbr_p(nb % 16);
	}
	return (len);
}

int	ft_putptr(unsigned long long ptr)
{
	int	len;

	if (!ptr)
		return (ft_putstr("(nil)"));
	len = 0;
	len += ft_putstr("0x");
	len += ft_putnbr_p(ptr);
	return (len);
}
