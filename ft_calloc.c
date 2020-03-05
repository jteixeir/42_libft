/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:15:46 by jteixeir          #+#    #+#             */
/*   Updated: 2020/03/04 21:40:34 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr2;
	size_t	c;
	char	*ptr1;

	c = 0;
	ptr2 = malloc(nmemb * size);
	ptr1 = ptr2;
	if (ptr1 == NULL)
		return (NULL);
	while (c < (nmemb * size))
	{
		*ptr1 = '\0';
		ptr1++;
		c++;
	}
	return (ptr2);
}
