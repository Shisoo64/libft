/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:03:39 by rlaforge          #+#    #+#             */
/*   Updated: 2022/04/18 16:04:11 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	tab = malloc(sizeof(char) * len);
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, s1, len);
	ft_strlcat(tab, s2, len);
	return (tab);
}
