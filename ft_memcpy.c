#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*sc;

	i = 0;
	dst = (char *)dest;
	sc = (char *)src;
	while (i < n)
		dst[i] = sc[i++];
	return (dest);
}
