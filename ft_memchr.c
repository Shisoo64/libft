/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:55:35 by rlaforge          #+#    #+#             */
/*   Updated: 2022/10/19 16:45:23 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	i = -1;
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (++i < n)
		if (str[i] == ch)
			return ((void *)str + i);
	return (NULL);
}
