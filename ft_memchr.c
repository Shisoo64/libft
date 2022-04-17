#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	i = -1;
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (++i < n)
		if (str[i] == ch)
			return ((void *)str + i);
	return (NULL);
}
