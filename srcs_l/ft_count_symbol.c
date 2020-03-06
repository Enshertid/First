/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_symbol.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:45:35 by ymanilow          #+#    #+#             */
/*   Updated: 2020/03/06 12:43:37 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_count_symbol(const char *str, char symb)
{
	int				count;

	count = 0;
	while (*str)
		if (*str++ == symb)
			count++;
	return (count);
}
