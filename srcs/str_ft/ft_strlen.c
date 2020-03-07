/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:24:28 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:27:46 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"

size_t	ft_strlen(const char *str)
{
	register const char *iter;

	iter = str;
	while (*iter)
		++iter;
	return (iter - str);
}
