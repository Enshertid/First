/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 13:18:54 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/20 20:37:54 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *name;

	if (!(name = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		name->content = NULL;
		name->content_size = 0;
	}
	else
	{
		if (!(name->content = malloc(sizeof(*content) * content_size)))
			return (NULL);
		name->content = ft_memcpy(name->content, content, content_size);
		name->content_size = content_size;
	}
	name->next = NULL;
	return (name);
}
