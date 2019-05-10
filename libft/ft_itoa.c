/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:26:53 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/17 20:53:10 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_checklen(int n, int i)
{
	while (n / 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	size_t	i;
	int		baze;
	char	*s;

	i = 1;
	baze = 1;
	if (n < 0)
	{
		baze = -1;
		i++;
	}
	i = ft_checklen(n * baze, i);
	if (!(s = ft_memalloc(i + 1)))
		return (NULL);
	s[i--] = '\0';
	while (n / 10)
	{
		s[i] = baze * (n % 10) + '0';
		i--;
		n = n / 10;
	}
	s[i--] = baze * n + '0';
	if (baze == -1)
		s[i] = '-';
	return (s);
}
