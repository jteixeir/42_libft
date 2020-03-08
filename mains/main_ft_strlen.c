/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 17:10:28 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/01 17:50:40 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "libft.h"

int		main(void)
{
	char test[] = "Jéssica";
	int myresult;
	int fresult;
	
	myresult = ft_strlen(test);
	printf("\nmy result is: %d", myresult);
	fresult = strlen(test);
	printf("\noriginal result is: %d", fresult);
	return (0);

}
