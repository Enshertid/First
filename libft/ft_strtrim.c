/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 18:13:18 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/18 16:29:52 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspaces(int c)
{
	if (c == '\n' || c == '\t' || c == ' ')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	while (ft_isspaces(*s))
		s++;
	i = ft_strlen(s);
	while ((ft_isspaces(s[i]) || s[i] == '\0') && i != 0)
		i--;
	if (i == 0 && (ft_isspaces(s[i]) || s[i] == '\0'))
	{
		if (!(str = ft_strnew(i + 1)))
			return (NULL);
		return (str);
	}
	if (!(str = ft_strnew(i + 1)))
		return (NULL);
	while (i != 0)
	{
		str[i] = s[i];
		i--;
	}
	str[i] = s[i];
	return (str);
}
