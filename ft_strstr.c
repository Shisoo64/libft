/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:10:28 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/26 16:03:17 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	ctr[2];

	if (*to_find == '\0')
		return (str);
	ctr[0] = 0;
	while (str[ctr[0]])
	{
		if (str[ctr[0]] == to_find[0])
		{
			ctr[1] = 0;
			while (str[ctr[1]] && str[ctr[0] + ctr[1]] == to_find[ctr[1]])
			{
				ctr[1]++;
				if (to_find[ctr[1]] == '\0')
					return (str + ctr[0]);
			}
		}
		ctr[0]++;
	}
	return (0);
}
