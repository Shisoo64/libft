#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*buf;

	i = -1;
	buf = (char *)s;
	while (buf[++i])
		if (buf[i] == c)
			return (buf + i);
	if (c == '\0')
		return (buf + i);
	return (NULL);
}
