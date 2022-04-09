#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	i = -1;
	ch = (unsigned char)c;
	while (++i < n)
	{
		if (str[i] == ch)
			return ((void *)str + i);
	}
	return (NULL);
}
