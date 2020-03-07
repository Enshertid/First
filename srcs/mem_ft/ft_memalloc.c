/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:16:26 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:25:42 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem_ft.h"

void			*ft_memalloc(size_t size)
{
	void		*ptr;

	if (!(ptr = malloc(size)))
		return (NULL);
	ft_memset(ptr, 0, size);
	return (ptr);
}
