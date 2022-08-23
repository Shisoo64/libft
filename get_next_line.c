/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:33:26 by rlaforge          #+#    #+#             */
/*   Updated: 2022/06/13 15:58:34 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_has_n(char *s, int param)
{
	int	i;

	i = 0;
	if (param)
	{
		while (s[i])
			if (s[i++] == '\n')
				return (i);
		return (0);
	}
	else
		while (s[i])
			if (s[i++] == '\n')
				return (i);
	return (i);
}

char	*ft_read(char *str, int fd)
{
	char	*buff;
	int		i;

	i = 1;
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	*buff = 0;
	while (!ft_has_n(str, 1) && i)
	{
		i = read(fd, buff, BUFFER_SIZE);
		buff[i] = '\0';
		str = ft_gnl_strjoin(str, buff);
	}
	free(buff);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*str;
	char		*line;

	str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	*str = 0;
	if (read(fd, str, 0) == -1 || fd < 0 || BUFFER_SIZE < 1)
		return (free(str), NULL);
	if (!save)
	{
		save = malloc(sizeof(char));
		*save = 0;
	}
	str = ft_gnl_strjoin(str, save);
	free(save);
	str = ft_read(str, fd);
	save = ft_gnl_substr(str, ft_has_n(str, 0), ft_strlen(str) - ft_has_n(str, 0));
	line = ft_gnl_substr(str, 0, ft_has_n(str, 0));
	return (free(str), line);
}
