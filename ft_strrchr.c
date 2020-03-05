/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 15:37:48 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/29 12:18:15 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char *count;

	count = 0;
	while (*str)
	{
		if (*str == c)
			count = ((char *)str);
		str++;
	}
	if (count)
		return (count);
	if (c == '\0')
		return ((char *)str);
	return (0);
}
