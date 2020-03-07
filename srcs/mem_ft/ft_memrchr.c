/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 21:32:07 by user              #+#    #+#             */
/*   Updated: 2020/03/07 15:26:09 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem_ft.h"

void					*ft_memrchr(const void *memptr, int symbol, size_t num)
{
	register unsigned char	*ptr;

	ptr = (unsigned char*)memptr;
	ptr += num - 1;
	while (num)
	{
		if (*ptr == (unsigned char) symbol)
			return (ptr);
		ptr--;
		num--;
	}
	return (NULL);
}
