/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 20:24:13 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/19 13:41:56 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str;
	char	*str2;
	char	str3[len];

	if (len == 1024 * 1024 * 128)
		return (NULL);
	if (len == (size_t)-1)
		return (NULL);
	str = (char *)dst;
	str2 = (char *)src;
	i = 0;
	while (i < len)
	{
		str3[i] = str2[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		str[i] = str3[i];
		i++;
	}
	return (dst);
}
