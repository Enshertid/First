/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrnchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <dbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 21:32:07 by user              #+#    #+#             */
/*   Updated: 2019/12/17 15:56:44 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrnchr(const void *memptr, int val, size_t num)
{
	register unsigned char *str;

	str = (unsigned char*)memptr;
	while (num)
	{
		if (*str != (unsigned char)val)
			return (str);
		--str;
		--num;
	}
	return (NULL);
}
