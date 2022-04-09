#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*str;

	i = -1;
	str = (char *)src;
	if (!size)
		return (ft_strlen(src));
	while (str[++i] && i < size - 1)
		dst[i] = str[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}
