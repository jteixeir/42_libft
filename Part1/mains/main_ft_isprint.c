/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 11:56:29 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/01 12:10:31 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isprint(int p);

int		main(void)
{
	int myresult;
	int fresult;

	myresult = ft_isprint('l');
	printf("\nmy result is: %i", myresult);
	fresult = isprint('l');
	printf("\noriginal function is: %i", fresult);
	return (0);
}
