/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:20:21 by jteixeir          #+#    #+#             */
/*   Updated: 2020/03/07 11:07:30 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (!s || len == 0 || ft_strlen(s) == 0 || start >= ft_strlen(s) - 1)
		return (ft_calloc(sizeof(char), 1));
	i = 0;
	while (s[i + start] && i < len)
		i++;
	res = ft_calloc(sizeof(char), i + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i + start] && i < len)
	{
		res[i] = s[i + start];
		i++;
	}
	return (res);
}
