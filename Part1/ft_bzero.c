/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:18:26 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/29 12:38:39 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s1;
	size_t	c;

	s1 = s;
	c = 0;
	while (c < n)
	{
		s1[c] = '\0';
		c++;
	}
}
