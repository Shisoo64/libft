/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:55:53 by rlaforge          #+#    #+#             */
/*   Updated: 2022/10/19 16:44:37 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*sc;

	i = -1;
	dst = (char *)dest;
	sc = (char *)src;
	while (++i < n)
		dst[i] = sc[i];
	return (dst);
}
