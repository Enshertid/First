/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:46:31 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/08 20:17:23 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char a;

	a = c;
	c = 0;
	while (s[c])
	{
		if (a == s[c])
			return ((char *)s + c);
		c++;
	}
	if (a == '\0')
		return ((char *)s + c);
	else
		return (NULL);
}
