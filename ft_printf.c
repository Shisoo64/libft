/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:46:06 by rlaforge          #+#    #+#             */
/*   Updated: 2022/08/23 15:55:41 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr_base(long long nb, char *base)
{
	int					len;
	unsigned int		baselen;

	len = 0;
	baselen = ft_strlen(base);
	if (nb < 0)
	{
		nb = -nb;
		len += ft_putchar('-');
	}
	if (nb <= baselen - 1)
		len += ft_putchar(base[nb]);
	if (nb > baselen - 1)
	{
		len += ft_putnbr_base(nb / baselen, base);
		len += ft_putnbr_base(nb % baselen, base);
	}
	return (len);
}

int	ft_params(char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar((char)va_arg(args, int));
	if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	if (format == 'p')
		len += ft_putptr(va_arg(args, unsigned long long));
	if (format == 'i')
		len += ft_putnbr_base(va_arg(args, int), "0123456789");
	if (format == 'd')
		len += ft_putnbr_base(va_arg(args, int), "0123456789");
	if (format == 'u')
		len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789");
	if (format == 'x')
		len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	if (format == 'X')
		len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	int			len;
	va_list		args;

	va_start(args, str);
	i = -1;
	len = 0;
	while (str[++i])
	{
		if (str[i] != '%')
			len += ft_putchar(str[i]);
		else
			len += ft_params(str[++i], args);
	}
	va_end(args);
	return (len);
}
