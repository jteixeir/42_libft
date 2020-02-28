#include "libft.h"

int	ft_nelements(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s[i])
	{

		if ((s[i] != c && s[i +1] == c) || (s[i] != c && s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

int	ft_strlen_char(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_callocelements(char const *s, char c)
{
	char	**new;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	new = (char **)calloc((ft_nelements(s, c) + 1), sizeof(char *));
	while (s[i])
	{
		while (s[i] == c)
			i++;
		new[j] = (char *)calloc((ft_strlen_char(s + i, c) +1), sizeof(char));
		k = 0;
		while (s[i] && s[i] != c)
		{
			new[j][k] = s[i];
			i++;
			k++;
		}
		new[j][k] = '\0';
		while (s[i] == c)
			i++;
		j++;
	}
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;

//	if (ft_nelements(s, c) == 0)
//		return (NULL);
	new = ft_callocelements(s, c);
	return (new);
}
