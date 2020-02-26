/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 15:30:16 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/02 15:35:17 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main () 
{
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   char *myresult;

   int c;

   ret = strrchr(str, ch);
   printf("função original\n%c\n%s", ch, ret);

   myresult = ft_strrchr(str, ch);
   printf("\nminha função\n%c\n%s", ch, ret);
   return(0);
}
