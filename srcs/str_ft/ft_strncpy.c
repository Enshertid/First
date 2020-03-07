/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:25:58 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:28:56 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	register size_t iter;

	if (!n)
		return (dest);
	iter = -1;
	while (src[++iter] && iter < n)
		dest[iter] = src[iter];
	while (iter < n)
		dest[iter++] = '\0';
	return (dest);
}
