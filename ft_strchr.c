#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*buf;

	i = -1;
	buf = (char *)s;
	if (c == '\0')
		return (buf + i);
	while (buf[++i])
		if (buf[i] == c)
			return (buf + i);
	return (NULL);
}
