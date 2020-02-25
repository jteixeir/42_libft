#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr2;
	size_t c;
	char *ptr1;

	c = 0;
	ptr2 = malloc(nmemb * size);
	ptr1 = ptr2;

	if (ptr1 == NULL)
		return (NULL);
	while (c < (nmemb * size))
	{
		*ptr1 = '\0';
		ptr1++;
		c++;
	}
	return (ptr2);
}

