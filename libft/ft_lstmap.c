/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 18:58:32 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/27 13:15:11 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free(t_list *lst, t_list *name)
{
	t_list	*p;

	while (name != lst)
	{
		p = name;
		free(name);
		name = p->next;
	}
	free(lst);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *name;
	t_list *name2;

	if (!(name = (t_list*)malloc(sizeof(*lst))))
		return (NULL);
	if (f && lst)
	{
		name = f(lst);
		name2 = name;
		while (lst->next)
		{
			lst = lst->next;
			if (!(name->next = f(lst)))
			{
				ft_free(name2, name);
				return (0);
			}
			name = name->next;
		}
		name = f(lst);
		return (name2);
	}
	return (0);
}
