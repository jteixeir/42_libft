/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 11:31:58 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/01 11:36:21 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isdigit(int d);

int		main(void)
{
	int myresult;
	int fresult;

	myresult = ft_isdigit('1');
	printf("\n my result is: %i", myresult);
	fresult = isdigit('1');
	printf("\n original function is: %i", fresult);
	return(0);
}
