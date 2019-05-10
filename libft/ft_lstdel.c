/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 15:13:25 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/27 11:53:51 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *name;
	t_list *p;

	if (!alst)
		return ;
	if (del && *alst)
	{
		name = *alst;
		while (name)
		{
			p = name->next;
			del(name->content, name->content_size);
			free(name);
			name = name->next;
		}
		*alst = NULL;
	}
}
