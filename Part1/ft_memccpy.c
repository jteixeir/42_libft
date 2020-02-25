#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *temp_src;
	unsigned char *temp_dest;

	i = 0;
	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		if (temp_dest[i] == (unsigned char)c)
			return ((void *)(temp_dest + i + 1));
		i++;
	}
	return (NULL);
}
