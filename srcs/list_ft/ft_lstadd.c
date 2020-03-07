/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:14:43 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:22:54 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_ft.h"

void	ft_lstadd(t_list **list, t_list *new_elem)
{
	if (list && new_elem)
	{
		new_elem->next = *list;
		*list = new_elem;
		if ((*list)->next)
			(*list)->end = (*list)->next->end;
	}
}
