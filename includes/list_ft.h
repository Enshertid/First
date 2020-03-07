/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_ft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:13:36 by ymanilow          #+#    #+#             */
/*   Updated: 2020/03/07 15:14:54 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_FT_H
# define LIST_FT_H

#include "head_of_lib.h"

typedef	struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
	struct s_list		*end;
}						t_list;

void					ft_lstpop(t_list **list);
void					ft_lstpurge(t_list **list);
void					ft_lstdelone(t_list **list);
void					ft_lstpopback(t_list **list);
size_t					ft_lstsize(const t_list *list);
void					ft_lstdelete(t_list **list, t_list **del);
void					ft_lstextend(t_list **list, t_list **add);
void					ft_lstappend(t_list **list, t_list *elem);
void					ft_lstadd(t_list **list, t_list *new_elem);
void					ft_lstiter(t_list *list, void(*f)(t_list *elem));
void					ft_lstdel(t_list **alst, void (*del)(void*, size_t));
t_list					*ft_lstnew(void const *content, size_t content_size);
t_list					*ft_lstmap(t_list *list, t_list *(*f)(t_list *elem));

#endif
