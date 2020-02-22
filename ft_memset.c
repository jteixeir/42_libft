#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *s1;
	size_t i;

	s1 = s;
	i = 0;
	while (i < n)
	{
		s1[i] = c;
		i++;
	}
	return (s);
}
