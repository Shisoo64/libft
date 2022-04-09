#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		longueur;

	longueur = ft_strlen(s1) + ft_strlen(s2) + 1;
	tab = malloc(sizeof(char) * longueur);
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, s1, longueur);
	ft_strlcat(tab, s2, longueur);
	return (tab);
}
