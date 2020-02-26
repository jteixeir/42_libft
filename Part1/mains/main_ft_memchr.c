#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char *s;
	int c;
	size_t n;
	char *result;

	s = "www.jessicateixeira.com";
	c = '.';
	n = 4;
	printf ("antes da função: %s\n", s);

	result = memchr(s, c, n);
	printf("depois da função original: %s\n", result);
	
	result = ft_memchr(s, c, n);
	printf("depois da minha função: %s\n", result);
	return (0);
}
