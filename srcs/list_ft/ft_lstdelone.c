/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:15:40 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/07 15:23:17 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_ft.h"

void	ft_lstdelone(t_list **list)
{
	if (!list || !*list)
		return ;
	free((*list)->content);
	free(*list);
	*list = NULL;
}
