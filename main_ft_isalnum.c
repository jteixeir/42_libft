/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 10:52:58 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/01 11:10:15 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int n);

int		main(void)
{
	int myresult;
	int fresult;

	myresult = ft_isalnum('0');
	printf("\nmy result is: %i\n", myresult);
	fresult = isalnum('0');
	printf("original function is: %i\n", fresult);
	return (0);
}
