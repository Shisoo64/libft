/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:07:26 by rlaforge          #+#    #+#             */
/*   Updated: 2022/04/18 16:13:37 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	if (*little == '\0')
		return ((char *)big);
	x = -1;
	while (big[++x] && x < len)
	{
		if (big[x] == little[0])
		{
			y = -1;
			while (big[++y] && big[x + y] == little[y]
				&& x + y < len)
				if (little[y + 1] == '\0')
					return ((char *)big + x);
		}
	}
	return (NULL);
}
