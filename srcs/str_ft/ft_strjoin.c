/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:24:08 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:28:26 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*new_str;
	register char	*iter;

	if (!s1 && !s2)
		return (NULL);
	new_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!new_str)
		return (NULL);
	iter = new_str;
	while (*s1)
		*iter++ = *s1++;
	while (*s2)
		*iter++ = *s2++;
	return (new_str);
}
