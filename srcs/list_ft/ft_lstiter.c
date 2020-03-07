/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:15:51 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:23:24 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_ft.h"

void	ft_lstiter(t_list *list, void (*f)(t_list *elem))
{
	if (!list || !f)
		return ;
	while (list)
	{
		f(list);
		list = list->next;
	}
}
