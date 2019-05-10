/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:40:16 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/19 12:59:16 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*str2;
	size_t	i;

	str = (char *)dst;
	str2 = (char *)src;
	i = 0;
	while (i < n)
	{
		str[i] = str2[i];
		i++;
	}
	return (dst);
}
