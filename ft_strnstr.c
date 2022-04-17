#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	x = -1;
	if (*little == '\0')
		return ((char *)big);
	while (big[++x] && x < len)
		if (big[x] == little[0])
		{
			y = 0;
			while (big[y] && big[x + y] == little[y]
				&& x + y < len)
				if (!little[++y])
					return ((char *)big + x);
		}
	return (NULL);
}
