/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:06:30 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/21 16:03:05 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int		main(void)
{
    const char largestring[] = "mundodebob";
    const char smallstring[] = "de";
    size_t len;
    char *oficial;
    char *nossa;


    len = 20;

    printf("antes da função %s,%s\n", largestring, smallstring);
    oficial = strnstr(largestring, smallstring, len);
    printf("depois da função %s", oficial);

	printf("\nantes da função %s,%s\n", largestring, smallstring);
    nossa = ft_strnstr(largestring, smallstring, len);
    printf("depois da função %s\n", nossa);
    return (0);
}
