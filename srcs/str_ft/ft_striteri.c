/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:23:59 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:29:08 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	register size_t index;

	index = -1;
	if (str && f)
		while (*str)
			f(++index, str++);
}
