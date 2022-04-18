/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:04:27 by rlaforge          #+#    #+#             */
/*   Updated: 2022/04/18 16:04:32 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*str;

	i = -1;
	str = (char *)src;
	if (!size)
		return (ft_strlen(src));
	while (str[++i] && i < size - 1)
		dst[i] = str[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}
