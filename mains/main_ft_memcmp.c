#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char *s1;
	const char *s2;
	size_t n;
	int result;

	s1 = "abcdefgfhi";
	s2 = "abdcefgxyz";
	n = 7;
	result = 0;

	printf("antes da função: %i\n", result);

	result = memcmp(s1, s2, n);
	printf("depois da função original: %i\n", result);

	result = ft_memcmp(s1, s2, n);
	printf("depois da minha função: %i\n", result);
	return (0);
}
