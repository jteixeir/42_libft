/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 10:19:10 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/01 11:04:48 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int l);

int		main(void)
{
	int myresult;
	int fresult;
	
	myresult = ft_isalpha('a');
	printf("\nmy result is: %i\n", myresult);
	fresult = isalpha('a');
	printf("original function is: %i\n", fresult);

	return (0);
}

