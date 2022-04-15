/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 20:42:44 by rlaforge          #+#    #+#             */
/*   Updated: 2022/04/15 20:47:46 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	truc(int n, int i[2])
{
	int	x;

	i[0] = 1;
	i[1] = 0;
	if (n < 0)
		i[1]++;
	x = n;
	while (x >= 10 || x <= -10)
	{
		x /= 10;
		i[0]++;
	}
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		i[2];

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	truc(n, i);
	if (i[1])
		n = -n;
	tab = malloc(sizeof(char) * ((i[0] += i[1]) + 1));
	if (!tab)
		return (NULL);
	tab[i[0]] = '\0';
	while (i[0]--)
	{
		tab[i[0]] = (n % 10) + '0';
		n /= 10;
	}
	if (i[1])
		tab[0] = '-';
	return (tab);
}
/*
int     main (void)
{
        printf ("%s\n", ft_itoa(0));
        printf ("%s\n", ft_itoa(9));
        printf ("%s\n", ft_itoa(-9));
        printf ("%s\n", ft_itoa(10));
        printf ("%s\n", ft_itoa(-10));
        printf ("%s\n", ft_itoa(8124));
        return (0);
}
*/
