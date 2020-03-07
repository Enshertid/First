/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:22:43 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:44:31 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"
#include "mem_ft.h"
#include "other_ft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	return (ft_memcmp(str1, str2, ft_min(ft_strlen(str1),
								ft_strlen(str2)) + 1));
}
