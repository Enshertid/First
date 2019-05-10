/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:22:58 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/28 14:38:50 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		ft_sizeofj(char const *s, char c)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		j++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (j);
}

static	size_t		ft_sizeofword(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static	char		**ft_free(char **str, size_t i)
{
	size_t j;

	j = 0;
	while (j < i)
	{
		free(str[j]);
		j++;
	}
	free(str);
	return (NULL);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**str;

	if (!s)
		return (NULL);
	j = ft_sizeofj(s, c);
	if (!(str = (char**)ft_memalloc(sizeof(char *) * (j + 1))))
		return (NULL);
	i = 0;
	while (i < j)
	{
		while (*s == c)
			s++;
		len = ft_sizeofword(s, c);
		if (!(str[i] = (char*)ft_memalloc(len + 1)))
			return (ft_free(str, i));
		str[i] = ft_strncpy(str[i], s, len);
		s = s + len;
		str[i][len] = '\0';
		i++;
	}
	return (str);
}
