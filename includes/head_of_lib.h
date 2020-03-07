/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head_of_lib.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:15:16 by ymanilow          #+#    #+#             */
/*   Updated: 2020/03/07 15:19:16 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_OF_LIB_H
# define HEAD_OF_LIB_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

# define MAX_LLONG		(9223372036854775807ll)
# define MAX_SIZE_T		(18446744073709551615llu)
# define MAX_INT		(2147483647)
# define MIN_INT		(-2147483648)
# define MIN_LLONG		-MAX_LLONG
# define ULL			unsigned long long
# define UL				unsigned long
# define TRUE 1
# define FALSE 0
# define GNL_BUFF_SIZE	1000

typedef char				t_bool;
typedef int_fast16_t		t_two_b_int;


#endif
