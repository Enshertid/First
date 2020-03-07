/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_ft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:14:20 by ymanilow          #+#    #+#             */
/*   Updated: 2020/03/07 15:36:43 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_FT_H
# define MEM_FT_H

#include "head_of_lib.h"

typedef struct			s_void
{
	void				*data;
	struct s_void		*next;
}						t_void;

void					ft_free_storage();
void					*ft_malloc_store(size_t size);
void					*ft_memalloc(size_t size);
void					*ft_memset(void *dest, int symbol, size_t bytes);
void					*ft_memcpy(void *dest_ptr,
									 const void *src_ptr, size_t bytes);
void					*ft_memchr(const void *memptr, int val, size_t num);
void					*ft_memnchr(const void *memptr, int val, size_t num);
void					*ft_memmove(void *dest, const void *src, size_t num);
void					*ft_memrchr(const void *memptr, int val, size_t num);
void					*ft_memrnchr(const void *memptr, int val, size_t num);
void					*ft_memccpy(void *d, const void *s, int ch,
						size_t cnt);
int						ft_memcmp(const void *mem1, const void *mem2,
						size_t num);

#endif
