/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:24:57 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:29:12 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"

char				*ft_strncat(char *destptr, const char *srcptr, size_t num)
{
	register char	*str;

	str = destptr + ft_strlen(destptr);
	while (*srcptr && num--)
		*str++ = *srcptr++;
	if (*(str - 1))
		*str = '\0';
	return (destptr);
}
