#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t	len;

	len = ft_strlen(dst);
	i = len;
	if (!src || size <= len)
		return (size + ft_strlen(src));
	j = 0;
	while (j < (size - len - 1) && src[j])
	{
		dst[i] = src[j];
		i++;
	       	j++;
	}
	dst[i] = '\0';
	return(len + ft_strlen(src));
}
