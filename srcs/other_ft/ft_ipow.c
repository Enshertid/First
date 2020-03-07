/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ipow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 15:42:48 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:32:53 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "other_ft.h"

unsigned long long	ft_ipow(unsigned long long num, int n)
{
	if (!n)
		return (1);
	if (n & 1)
		return (num * ft_ipow(num, n - 1));
	else
		return (ft_ipow(num * num, n >> 1));
}
