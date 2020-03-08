#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char *str1;
	const char *str2;
	int res_original1;
	int res_original2;

	int meu_res1;
	int meu_res2;

	str1 = "1a2";
	str2 = "34";

	res_original1 = atoi(str1);
	res_original2 = atoi(str2);
	printf("result of str1 + str2 = %d\n", res_original1 + res_original2);

	meu_res1 = ft_atoi(str1);
	meu_res2 = ft_atoi(str2);
	printf("result of str1 + str2 = %d\n", meu_res1 + meu_res2);

	return (0);
}

