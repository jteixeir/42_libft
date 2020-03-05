/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:18:43 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/29 12:44:49 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*temp1;
	const unsigned char	*temp2;
	size_t				c;

	temp1 = s1;
	temp2 = s2;
	c = 0;
	if (n == 0)
		return (0);
	while (--n && temp1[c] == temp2[c])
		c++;
	return (temp1[c] - temp2[c]);
}
