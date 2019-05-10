/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:30:43 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/13 22:29:46 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	a;

	i = 0;
	j = 0;
	if (needle[i] == '\0' && len == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		a = i;
		while (a < len && needle[j] == haystack[a] && needle[j])
		{
			a++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		j = 0;
		i++;
	}
	return (NULL);
}
