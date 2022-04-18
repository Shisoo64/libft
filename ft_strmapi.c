/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:05:56 by rlaforge          #+#    #+#             */
/*   Updated: 2022/04/18 16:06:31 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*temp;

	i = -1;
	if (s == 0)
		return (0);
	temp = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!temp)
		return (NULL);
	while (s[++i])
		temp[i] = (*f)(i, s[i]);
	temp[i] = '\0';
	return (temp);
}
