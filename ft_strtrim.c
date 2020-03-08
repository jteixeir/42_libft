/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 20:41:08 by jteixeir          #+#    #+#             */
/*   Updated: 2020/03/07 14:14:24 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	finder(char l, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == l)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		beg;
	int		end;
	char	*new;

	if (s1 == NULL || set == NULL)
		return (NULL);
	beg = 0;
	while (s1[beg] && finder(s1[beg], set) == 1)
		beg++;
	if (s1[beg] == '\0')
		return (new = ft_calloc(1, sizeof(char)));
	end = ft_strlen(s1) - 1;
	while (finder(s1[end], set) == 1)
		end--;
	new = ft_substr(s1, beg, (end + 1) - beg);
	if (!new)
		return (NULL);
	return (new);
}
