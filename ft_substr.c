/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:19:31 by rlaforge          #+#    #+#             */
/*   Updated: 2022/04/18 16:19:42 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*buf;
	unsigned int	i;
	size_t			x;

	i = 0;
	if (s == 0)
		return (NULL);
	x = ft_strlen(s);
	if (start >= x)
	{
		buf = malloc(sizeof(char));
		if (!buf)
			return (NULL);
		*buf = '\0';
		return (buf);
	}
	if (len >= x)
		len = x - start;
	buf = malloc(sizeof(char) * (len + 1));
	if (!buf)
		return (NULL);
	while (len-- && (start + len) <= x)
		buf[i++] = s[start++];
	buf[i] = '\0';
	return (buf);
}
