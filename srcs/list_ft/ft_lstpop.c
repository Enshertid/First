/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:05:33 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:23:46 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_ft.h"

void	ft_lstpop(t_list **list)
{
	t_list *temp;

	if (!list || !*list)
		return ;
	if ((*list)->next)
		(*list)->next->end = (*list)->end;
	temp = (*list)->next;
	free((*list)->content);
	free(*list);
	*list = temp;
}
