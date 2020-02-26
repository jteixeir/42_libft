#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	const char *s1 = "mundo de Bob";
	const char *s2 = "mundo de Bob";
	size_t n = 20;
	int result;

	result = strncmp(s1, s2, n);
	printf("funçao original, %s, %s, %i\n", s1, s2, result);

	result = ft_strncmp(s1, s2, n);
	printf("funçao original, %s, %s, %i\n", s1, s2, result);
	return (0);

}

