/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:17:43 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:25:48 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem_ft.h"

static void			ft_double_memset(void *dest, char symbol, size_t bytes)
{
	t_two_b_int			i;
	t_two_b_int			per;
	t_two_b_int			*dst;
	char				*help;

	per = 0;
	i = -1;
	while (++i < 2)
		per = symbol << ((1 - i) * 8);
	dst = (t_two_b_int*)dest;
	while (bytes > 1)
	{
		*dst = per;
		dst++;
		bytes -= 2;
	}
	if (bytes)
	{
		help = (char*)dst;
		*help = symbol;
	}
}

void	*ft_memset(void *dest, int symbol, size_t bytes)
{
	register char *d;

	if (bytes > 128)
		ft_double_memset(dest, symbol, bytes);
	else
	{
		d = (char*)dest;
		while (bytes--)
			*d++ = symbol;
	}
	return (dest);
}
