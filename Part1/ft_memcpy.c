#include <stdio.h>
#include "libft.h"


void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *dest2;
	const char *src2;
	size_t c;


	c = 0;
	dest2 = dest;
	src2 = src;

	while (c < n)
	{
		dest2[c] = src2[c];
		c++;
	}
	return (dest);
}
