/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstpurge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 18:24:01 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:32:53 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "other_ft.h"

void	ft_dlstpurge(t_dlist **list)
{
	register t_dlist	*iter;
	register t_dlist	*temp;

	if (!list || !*list)
		return ;
	iter = *list;
	while (iter)
	{
		temp = iter->next;
		free(iter->data);
		free(iter);
		iter = temp;
	}
	*list = NULL;
}
