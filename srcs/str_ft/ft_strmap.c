/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:24:42 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:28:34 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"

char	*ft_strmap(const char *str, char (*f)(char))
{
	register char	*new_str;
	size_t			iter;

	if (!str || !f)
		return (NULL);
	new_str = (char*)malloc(ft_strlen(str) + 1);
	if (!new_str)
		return (NULL);
	iter = -1;
	while (str[++iter])
		new_str[iter] = f(str[iter]);
	new_str[iter] = '\0';
	return (new_str);
}
