/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 22:42:55 by user              #+#    #+#             */
/*   Updated: 2020/03/07 15:54:14 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "other_ft.h"
#include "mem_ft.h"

void	ft_swap(void *a, void *b, size_t size)
{
	unsigned char temp[size];

	if (a == b)
		return ;
	ft_memcpy(temp, a, size);
	ft_memmove(a, b, size);
	ft_memcpy(b, temp, size);
}
