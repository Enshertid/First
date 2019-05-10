/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:23:51 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/13 19:31:48 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	b;

	i = 0;
	b = c;
	str = (char *)s;
	while (i < n)
	{
		if (b == str[i])
			return (str + i);
		i++;
	}
	return (NULL);
}
