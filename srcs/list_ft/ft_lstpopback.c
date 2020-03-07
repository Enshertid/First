/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpopback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:11:52 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:23:42 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_ft.h"

void		ft_lstpopback(t_list **list)
{
	register t_list	*iter;
	t_list			*temp;

	if (!list || !*list)
		return ;
	iter = *list;
	temp = NULL;
	while (iter != (*list)->end)
	{
		temp = iter;
		iter = iter->next;
	}
	free(iter->content);
	free(iter);
	if (!temp)
		*list = NULL;
	else
		(*list)->end = temp;
}
