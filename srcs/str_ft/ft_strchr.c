/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:20:47 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:45:27 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"
#include "mem_ft.h"
#include "other_ft.h"

char	*ft_strchr(const char *str, int character)
{
	return ((char*)ft_memchr((void*)str, character, ft_strlen(str) + 1));
}
