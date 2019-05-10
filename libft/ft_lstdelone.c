/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:30:30 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/27 11:54:14 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list *name;

	if (!alst)
		return ;
	if (del && *alst)
	{
		name = *alst;
		del(name->content, name->content_size);
		free(*alst);
		*alst = NULL;
	}
}
