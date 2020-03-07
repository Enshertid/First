/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:27:04 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:27:58 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"

char	*ft_strrchr(const char *str, int ch)
{
	const char	*found;
	const char	*p;

	ch = (unsigned char)ch;
	if (ch == '\0')
		return (ft_strchr(str, '\0'));
	found = NULL;
	while ((p = ft_strchr(str, ch)) != NULL)
	{
		found = p;
		str = p + 1;
	}
	return ((char*)found);
}
