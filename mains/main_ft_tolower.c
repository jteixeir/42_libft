/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:24:51 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/01 12:40:11 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <xlocale.h>

int		ft_tolower(int lo);

int		main(void)
{
	int myresult;
	int fresult;

	myresult = ft_tolower('A');
	printf("\nmy result is: %i", myresult);
	fresult = tolower('A');
	printf("\noriginal result is: %i", fresult);
	return (0);
}
