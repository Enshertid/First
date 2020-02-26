/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 13:26:01 by ymanilow          #+#    #+#             */
/*   Updated: 2020/02/26 16:23:40 by ymanilow         ###   ########.fr       */
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
	return (num);
}
