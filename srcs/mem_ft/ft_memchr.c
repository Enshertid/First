/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:16:56 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:25:58 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem_ft.h"

void						*ft_memchr(const void *memptr, int val, size_t num)
{
	register unsigned char	*str;

	str = (unsigned char*)memptr;
	while (*str && num)
	{
		if (*str == (unsigned char)val)
			return (str);
		str++;
		num--;
	}
	return (NULL);
}
