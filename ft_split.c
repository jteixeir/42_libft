/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:20:01 by jteixeir          #+#    #+#             */
/*   Updated: 2020/03/04 20:39:04 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nelements(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s[i])
	{

		if ((s[i] != c && s[i +1] == c) || (s[i] != c && s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

static int	until(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_callocelements(char const *s, char c)
{
	char	**new;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (!(new = (char **)ft_calloc((nelements(s, c) + 1), sizeof(char *))))
		return (NULL);
	if (nelements(s, c) == 0)
		return (new);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if(!(new[j] = (char *)ft_calloc((until(s + i, c) +1), sizeof(char))))
			return (NULL);
		k = 0;
		while (s[i] && s[i] != c)
			new[j][k++] = s[i++];
		while (s[i] == c)
			i++;
		j++;
	}
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;

	new = ft_callocelements(s, c);
	return (new);
}
