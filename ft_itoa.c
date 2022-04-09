#include"libft.h"

char	*ft_itoa(int n)
{
	char	*tab;
	int		x;
	int		i;

	i = 1;
	x = n;
	while (x > 10)
	{
		x /= 10;
		i++;
	}
	tab = malloc(sizeof(int) * i);
	while (i--)
	{
		tab[i] = (n % 10) + '0';
		n /= 10;
	}
	tab[i] = n;
	return (tab);
}
