/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_ft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:11:17 by ymanilow          #+#    #+#             */
/*   Updated: 2020/03/07 15:14:10 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_FT_H
# define STR_FT_H

#include "head_of_lib.h"

char					*ft_strrev(char *str);
void					ft_strclr(char *str);
void					ft_strdel(char **str);
char					*ft_strtrim(char *str);
char					*ft_strnew(size_t size);
size_t					ft_strlen(const char *str);
char					*ft_strdup(const char *str);
void					ft_striter(char *s, void(*f)(char*));
char					*ft_strrchr(const char *str, int ch);
char					**ft_strsplit(const char *str, char c);
char					*ft_strcat(char *dest, const char *src);
char					*ft_strcpy(char *dest, const char *src);
int						ft_strequ(const char *s1, const char *s2);
char					*ft_strchr(const char *str, int character);
char					*ft_strjoin(const char *s1, const char *s2);
char					*ft_strmap(const char *str, char (*f)(char));
int						ft_strcmp(const char *str1, const char *str2);
char					*ft_strstr(const char *str, const char *find);
char					*ft_strncpy(char *dest, const char *src, size_t n);
size_t					ft_strlcat(char *dest, const char *src, size_t size);
int						ft_strnequ(const char *s1, const char *s2, size_t n);
void					ft_striteri(char *str,
						void (*f)(unsigned int, char *));
char					*ft_strncat(char *destptr,
						const char *srcptr, size_t num);
int						ft_strncmp(const char *str1,
						const char *str2, size_t num);
char					*ft_strnstr(const char *str,
						const char *find, size_t len);
char					*ft_strmapi(char const *str,
						char (*f)(unsigned int, char));
char					*ft_strsub(const char *str,
						unsigned int start, size_t len);

#endif
