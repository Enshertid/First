/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:34:18 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:29:28 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"

char	*ft_strsub(const char *str, unsigned int start, size_t len)
{
	char	*result;
	size_t	iter;

	if (!str)
		return (NULL);
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	iter = -1;
	str += start;
	while (++iter < len && str[iter] != '\0')
		result[iter] = str[iter];
	result[iter] = '\0';
	return (result);
}
