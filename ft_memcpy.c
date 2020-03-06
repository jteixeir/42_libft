/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:16:37 by jteixeir          #+#    #+#             */
/*   Updated: 2020/03/06 15:39:24 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest2;
	const char	*src2;
	size_t		c;

	c = 0;
	dest2 = dest;
	src2 = src;
	if (!dest && !src)
		return (NULL);
	while (c < n)
	{
		dest2[c] = src2[c];
		c++;
	}
	return (dest);
}
