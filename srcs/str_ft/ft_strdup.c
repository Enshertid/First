/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:23:15 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:45:57 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"
#include "mem_ft.h"
#include "other_ft.h"

char	*ft_strdup(const char *str)
{
	char	*new_str;
	size_t	size;

	size = ft_strlen(str) + 1;
	new_str = (char*)malloc(size);
	if (!new_str)
		return (NULL);
	return ((char*)ft_memcpy(new_str, str, size));
}
