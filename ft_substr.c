/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:20:21 by jteixeir          #+#    #+#             */
/*   Updated: 2020/03/06 18:37:39 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	if (!(sub = ft_calloc((len + 1), sizeof(char))))
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
		while (s[i] && i < len)
		{
			sub[i] = s[start + i];
			i++;
		}
	return (sub);
}
