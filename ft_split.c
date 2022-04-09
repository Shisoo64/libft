#include"libft.h"

char **ft_split(char const *s, char c)
{
	char	**str;
	int	i;
	int	x;
	int	y;

	i = -1;
	x = 0;
	y = 0;

	while (s[++i])
		if (s[i] == c)
			x++;
	str = malloc(sizeof(char *) * (x + 1));
	if (!str)
		return (NULL);
	i = -1;
	x = 0;
	while (s[++i])
	{
		y++;
		if (s[i] == c || !s[i + 1])
		{
			str[x++] = malloc(sizeof(char) * y);
			if (!str[x - 1])
				return (NULL);
			y = 0;
		}
	}
	i = -1;
	x = 0;
	y = 0;
	while (s[++i])
	{
		str[x][y++] = s[i];
		if (s[i] == c)
		{
			str[x++][y - 1] = '\0';
			y = 0;
		}
	}

	return (str);
}

int	main (void)
{
	char **str;
	str = ft_split("salut les gars ca va", ' ');
	int	i = 0;

	while (str[i])
	{
		printf ("%s\n", str[i]);
		i++;
	}
	return (0);
}
