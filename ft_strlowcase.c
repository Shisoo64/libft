/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:07:37 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/20 17:44:24 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char str)
{
	if (str < 65 || str > 90)
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_alpha(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
