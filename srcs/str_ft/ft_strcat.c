/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:20:34 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:28:07 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"

char	*ft_strcat(char *dest, const char *src)
{
	register char *str;

	str = dest + ft_strlen(dest);
	while (*src)
		*str++ = *src++;
	*str = '\0';
	return (dest);
}
