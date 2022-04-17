#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d < s)
		ft_memcpy(d, s, n);
	else
		while (n--)
			d[n] = s[n];
	return (dest);
}
