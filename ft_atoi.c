/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:27:46 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/30 22:55:58 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	r;
	
	i = 0;
	r = 0;
	
	if (str[i] == '-')
		neg = -++i;
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')	
		r = r * 10 + (str[i++] - '0');
	return (r * neg);
}

#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("%d\n", atoi("+123456789"));
	printf("%d", ft_atoi("+123456789"));
}
