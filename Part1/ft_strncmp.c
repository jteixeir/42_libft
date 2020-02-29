/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:19:01 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/29 12:50:46 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (0);
	while (n - 1 > (size_t)c && s1[c] && s2[c] && s1[c] == s2[c])
		c++;
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
