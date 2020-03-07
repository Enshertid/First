/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:17:15 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:25:53 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem_ft.h"


static void		ft_double_memcpy(void *dst_ptr,
									const void *src_ptr, size_t bytes)
{
	t_two_b_int		*dst;
	t_two_b_int		*src;
	char			*dst_;
	char			*src_;

	dst = (t_two_b_int*)dst_ptr;
	src = (t_two_b_int*)src_ptr;

	while (bytes > 1)
	{
		*dst++ = *src++;
		bytes -= 2;
	}
	if (bytes)
	{
		dst_ = (char*)dst_ptr;
		src_ = (char*)src_ptr;
		dst_ = src_;
	}
}

void			*ft_memcpy(void *dest_ptr, const void *src_ptr, size_t bytes)
{
	register char		*str;
	register char		*src;

	if (!dest_ptr && !src_ptr)
		return (NULL);
	if (bytes > 128)
		ft_double_memcpy(dest_ptr, src_ptr, bytes);
	else
	{
		str = (char*)dest_ptr;
		src = (char*)src_ptr;
		while (bytes--)
			*str++ = *src++;
	}
	return (dest_ptr);
}
