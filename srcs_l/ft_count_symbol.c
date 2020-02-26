/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_symbol.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:45:35 by ymanilow          #+#    #+#             */
/*   Updated: 2020/02/26 17:00:19 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_count_symbol(const char *str, char symb)
{
	int				count;

	count = 0;
	while (*str)
		if (*str++ == symb)
			count++;
	return (count);
}
