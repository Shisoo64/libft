/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:17:18 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/20 17:40:29 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char str)
{
	if (str < 97 || str > 122)
	{
		return (0);
	}
	return (1);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_alpha(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
