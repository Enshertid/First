/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:22:52 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:28:12 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	register char *str;

	str = dest;
	while (*src)
		*str++ = *src++;
	*str = '\0';
	return (dest);
}
