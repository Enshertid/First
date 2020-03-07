/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:15:59 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:23:27 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_ft.h"

t_list	*ft_lstmap(t_list *list, t_list *(*f)(t_list *elem))
{
	t_list			*new_list;
	register t_list	*iter;

	if (!list || !f)
		return (NULL);
	new_list = f(list);
	if (!new_list)
		return (NULL);
	iter = new_list;
	list = list->next;
	while (list)
	{
		if (!(iter->next = f(list)))
		{
			ft_lstpurge(&new_list);
			return (NULL);
		}
		iter = iter->next;
		list = list->next;
	}
	return (new_list);
}
