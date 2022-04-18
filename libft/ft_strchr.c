/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:00:43 by rlaforge          #+#    #+#             */
/*   Updated: 2022/04/18 16:00:47 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*buf;

	i = -1;
	buf = (char *)s;
	if (c == '\0')
		return (buf + i);
	while (buf[++i])
		if (buf[i] == c)
			return (buf + i);
	return (NULL);
}
