#include <string.h>
#include <stdio.h>
#include "libft.h"

char	source[60] = "taj maal is a historic monument in india";

int	main(void)
{
	char destine [61];

	printf("essa é a origem: %s\n", source);
	printf("esse é o destino: %s\n", destine);

	memccpy(destine, source, 'i', 11);
	printf("essa é a origem - função original: %s\n", source);
	printf("esse é o destino - função original: %s\n", destine);

	ft_memccpy(destine, source, 'i', 11);
	printf("essa é a origem - minha função: %s\n", source);
	printf("esse é o destino - minha função: %s\n", destine);

	return (0);
}
