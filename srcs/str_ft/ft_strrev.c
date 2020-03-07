/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:20:07 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:27:02 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_ft.h"

char	*ft_strrev(char *str)
{
	register size_t	start;
	register size_t	end;
	char			temp;

	if (!str)
		return (NULL);
	start = 0;
	end = ft_strlen(str) - 1;
	if (end <= start)
		return (NULL);
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		++start;
		--end;
	}
	return (str);
}
