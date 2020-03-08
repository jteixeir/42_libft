/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 11:46:51 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/01 11:51:44 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isascii(int a);

int		main(void)
{
	int myresult;
	int fresult;

	myresult = ft_isascii(' ');
	printf("\nmy result is: %i", myresult);
	fresult = isascii(' ');
	printf("\noriginal function is: %i", fresult);
	return (0);
}
