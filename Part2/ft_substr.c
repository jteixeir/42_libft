#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char *sub;

	sub = malloc((len + 1)*sizeof(char));
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i]  = '\0';
	return (sub);
}
