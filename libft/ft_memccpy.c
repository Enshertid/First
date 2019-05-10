/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:48:46 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/18 14:46:00 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
		int c, size_t n)
{
	unsigned char			b;
	unsigned char			*str;
	unsigned char			*str2;
	size_t					i;

	b = (unsigned char)c;
	i = 0;
	str = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (i < n)
	{
		str[i] = str2[i];
		if (b == str[i])
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
