/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:18:10 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:32:53 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "other_ft.h"

void	ft_putchar(char c)
{
	char ch[2];

	if ((unsigned char)c < 128)
		write(1, &c, 1);
	else
	{
		ch[0] = ((3 << 6) + ((unsigned char)c >> 6));
		ch[1] = ((1 << 7) + ((unsigned char)c & 63));
		write(1, ch, 2);
	}
}
