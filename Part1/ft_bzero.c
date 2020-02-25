#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *s1;
	size_t c;

	s1 = s;
	c = 0;
	while (c < n)
	{
		s1[c] = '\0';
		c++;
	}	
}
