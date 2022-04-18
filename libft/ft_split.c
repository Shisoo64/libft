/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:30:04 by rlaforge          #+#    #+#             */
/*   Updated: 2022/04/15 20:11:39 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	ft_strnb(char const *s, char c)
{
	size_t	i;
	size_t	strnb;

	i = 0;
	strnb = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || !s[i + 1])
			strnb++;
		i++;
	}
	return (strnb);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_strnb(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j++] = ft_substr(s, i, ft_len((char *)s + i, c));
			i += ft_len((char *)s + i, c);
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

/*
int	main (void)
{
	char **str;
	int	i;

	i = 0; 
	//str = ft_split("salut les gars ca va", ' ');
	str = ft_split(" ", 'z');
	while (str[i])
	{
		printf ("%s\n", str[i]);
		i++;
	}
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}
*/
