/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:23:52 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/29 12:51:34 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	c1;
	int		c2;
	int		l;

	c1 = 0;
	l = ft_strlen(little);
	if (!big)
		return (NULL);
	if (l == 0)
		return ((char *)big);
	l--;
	while (big && c1 < len)
	{
		c2 = 0;
		while (big[c1 + c2] == little[c2] && c2 <= l && (c1 + c2) < len)
		{
			if (c2 == l)
				return ((char *)big + c1);
			c2++;
		}
		c1++;
	}
	return (NULL);
}
