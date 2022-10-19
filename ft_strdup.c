/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:01:11 by rlaforge          #+#    #+#             */
/*   Updated: 2022/10/19 16:40:22 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
	ft_strcpy(dest, (char *)s);
	return (dest);
}
