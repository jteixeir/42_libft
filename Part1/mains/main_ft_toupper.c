/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:10:51 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/01 12:20:46 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <xlocale.h>

int		ft_toupper(int up);

int		main(void)
{
	int myresult;
	int fresult;

	myresult = ft_toupper('x');
	printf("\n my result is: %i", myresult);
	fresult = toupper('x');
	printf("\n original function is: %i", fresult);
	return (0);
}
