/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 16:57:13 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/20 20:24:06 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s;
	size_t	i;

	i = 0;
	if (s1)
	{
		while (s1[i] && i < n)
			i++;
		if (!(s = (char*)ft_strnew(i)))
			return (NULL);
		if (i == 0)
			return (s);
		i--;
		while (i != 0)
		{
			s[i] = s1[i];
			i--;
		}
		s[i] = s1[i];
		return (s);
	}
	return (NULL);
}
