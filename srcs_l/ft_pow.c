/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 13:26:01 by ymanilow          #+#    #+#             */
/*   Updated: 2020/03/06 12:59:08 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int								ft_pow(unsigned int num, int pow)
{
	__int128_t			res;

	res = 1;
	while (pow)
	{
		if (pow & 1)
			res *= num;
		num *= num;
		pow >>= 1;
	}
	num = res;
	if (res != num)
		ft_error("overflow of int in ft_pow", 1);
	return (num);
}
