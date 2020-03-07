/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_ft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:15:59 by ymanilow          #+#    #+#             */
/*   Updated: 2020/03/07 15:56:51 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHER_FT_H
# define OTHER_FT_H

# include "head_of_lib.h"
# include <stdarg.h>

typedef struct			s_dlist
{
	void				*data;
	struct s_dlist		*next;
	struct s_dlist		*prev;
	struct s_dlist		*end;
}						t_dlist;

void					ft_free(char **str, size_t i);
void					ft_error(const char *error_msg, int error_code);

t_bool					ft_check_num(const char *str);
unsigned int			ft_pow(unsigned int num, int pow);
int						ft_is_hex(char c);
int						ft_count_symbol(const char *str, char symb);

int						ft_get_next_line(int fd, char **line);
int						ft_mod_num(int num);
size_t					ft_count_words(const char *str, char c);
__int128_t				ft_atoi_base(const char *str, int base);

void					ft_dlstpurge(t_dlist **list);
size_t					ft_dlstsize(const t_dlist *list);
void					ft_dlstadd(t_dlist **list, t_dlist *elem);
t_dlist					*ft_dlstnew(const void *data, size_t size);
void					ft_dlstappend(t_dlist **list, t_dlist *elem);
void					ft_dlstiter(t_dlist *list, void (*f)(t_dlist *elem));

void					ft_putnbr(int n);
void					ft_putchar(char c);
void					ft_putstr(const char *str);
void					ft_putendl(const char *str);
void					ft_putnbr_fd(int n, int fd);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *str, int fd);
void					ft_putendl_fd(const char *str, int fd);

char					*ft_mitoa(__int128_t num,
						unsigned base, unsigned size);
char					*ft_itoa_buf(__int128_t num, char *str, unsigned base,
																unsigned size);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_isprint(int c);
int						ft_isspace(int c);
void					ft_swap(void *a, void *b, size_t size);
__int128_t				ft_atoi(const char *str);
size_t					sizeof_num(__int128_t num, unsigned base);

int						ft_abs(int a);
int						ft_tolower(int c);
int						ft_toupper(int c);
int						ft_min(int a, int b);
int						ft_max(int a, int b);
int						ft_minn(int amount, ...);
int						ft_maxn(int amount, ...);
long double				ft_dpow(long double num, int n);
void					print_bits(void *a, size_t size);
void					printn_bits(void *a, size_t size);
unsigned long long		ft_ipow(unsigned long long num, int n);
char					*ft_itoa(long long int num);
char					*ft_my_itoa(__int128_t num, char *str, unsigned base,
								unsigned is_upper);

#endif
