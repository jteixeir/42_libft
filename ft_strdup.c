/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:18:04 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/29 12:47:50 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	int		c;

	c = 0;
	s1 = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!s1)
		return (NULL);
	while (s[c])
	{
		s1[c] = s[c];
		c++;
	}
	return (s1);
}
