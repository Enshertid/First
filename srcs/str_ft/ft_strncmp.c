/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:25:49 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:46:29 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"
#include "mem_ft.h"
#include "other_ft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	if (num)
		return (ft_memcmp(str1, str2, ft_min(num, ft_min(ft_strlen(str1),
				ft_strlen(str2)) + 1)));
	else
		return (0);
}
