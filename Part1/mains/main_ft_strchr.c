/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 11:27:24 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/02 13:15:15 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strchr(const char *s, int c);

int		main(void)
{
	char test[] = "Jess";
	int l = 'i';
	char *fresult;
	char *myresult;

	write(1, "X", 1);
	fresult = strchr(test, l);
	
	write(1, "X", 1);
	myresult = ft_strchr(test, l);

	if (!(fresult) && !(myresult))
			{
				printf("OK");
				return 0;
			}
	
printf("\noriginal result is: %c", *fresult);

	printf("\nmy result is: %c", *myresult);
	write(1, "X", 1);
	return (0);
}
