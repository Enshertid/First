# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/17 13:02:34 by ymanilow          #+#    #+#              #
#    Updated: 2019/12/17 16:15:05 by ymanilow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror -I $(DIR_H_L) -I $(DIR_H_P)


DIR_P = srcs_p

DIR_L = srcs_l


DIR_O_P = obj_p

DIR_O_L = obj_l


DIR_H_L = includes_l

DIR_H_P = includes_p


SRCS_L =\
ft_abs.c	ft_error.c	ft_swap.c				\
ft_dpow.c	ft_ipow.c	ft_arrdel.c				\
ft_sizeof_num.c	ft_print_bits.c	ft_memrnchr.c	\
ft_tolower.c	ft_toupper.c					\
ft_isalnum.c	ft_isalpha.c	ft_isascii.c	\
ft_isdigit.c	ft_isprint.c	ft_isspace.c	\
ft_putnbr.c		ft_putstr.c		ft_putchar.c	\
ft_putendl.c	ft_putnbr_fd.c	ft_putstr_fd.c	\
ft_putendl_fd.c	ft_putchar_fd.c					\
ft_atoi.c		ft_itoa.c		ft_mitoa.c		\
ft_min.c	ft_max.c	ft_maxn.c	ft_minn.c	\
ft_memcmp.c		ft_memset.c		ft_memcpy.c		\
ft_memchr.c		ft_memccpy.c	ft_memmove.c	\
ft_memalloc.c	ft_memnchr.c	ft_memrchr.c	\
ft_strrev.c		ft_strcmp.c		ft_strdel.c		\
ft_strcpy.c		ft_strlen.c		ft_strstr.c		\
ft_strchr.c		ft_strsub.c		ft_strequ.c		\
ft_strnew.c		ft_strmap.c		ft_strcat.c		\
ft_strdup.c		ft_strclr.c		ft_striter.c	\
ft_strnequ.c	ft_strncmp.c	ft_strncat.c	\
ft_strjoin.c	ft_strrchr.c	ft_strnstr.c	\
ft_strlcat.c	ft_strmapi.c	ft_strncpy.c	\
ft_strtrim.c	ft_striteri.c	ft_strsplit.c	\
ft_lstnew.c		ft_lstmap.c		ft_lstadd.c		\
ft_lstpop.c		ft_lstiter.c	ft_lstsize.c	\
ft_lstpurge.c	ft_lstdelete.c	ft_lstextend.c	\
ft_lstdelone.c	ft_lstappend.c	ft_lstpopback.c	\
ft_dlstnew.c	ft_dlstnew.c	ft_dlstiter.c	\
ft_dlstsize.c	ft_dlstpurge.c	ft_dlstappend.c	\
ft_get_next_line.c	ft_mod_num.c	ft_is_hex.c


SRCS_P =	ft_printf.c\
			ft_unsigneditoa_base.c\
			list_filling_functions.c\
			list_functions.c\
			output_digital.c\
			output.c\
			parsing.c\
			pointer.c\
			string.c\
			ft_char.c\
			double.c\
			double1.c\
			double2.c\
			color_work.c\
			output_bits.c\
			usage_flags.c

OBJ_P = $(addprefix $(DIR_O_P)/,$(SRCS_P:.c=.o))

OBJ_L = $(addprefix $(DIR_O_L)/,$(SRCS_L:.c=.o))

all: $(NAME)

$(NAME): $(OBJ_P) $(OBJ_L)
	@ar rc $(NAME) $(OBJ_P) $(OBJ_L)
	@ranlib $(NAME)

$(DIR_O_P)/%.o: $(DIR_P)/%.c $(DIR_H_P)/ft_printf.h
	@mkdir -p $(DIR_O_P)
	@$(CC) $(FLAGS) -o $@ -c $<

$(DIR_O_L)/%.o: $(DIR_L)/%.c $(DIR_H_L)/libft.h
	@mkdir -p $(DIR_O_L)
	@$(CC) $(FLAGS) -o $@ -c $<

norme:
	norminette ./DIR_L/
	@echo
	norminette ./$(DIR_H_L)/
	@echo
	norminette ./DIR_P/
	@echo
	norminette ./$(DIR_H_P)/
	@echo

clean:
	@rm -f $(OBJ_P)
	@rm -Rf $(DIR_O_P)
	@rm -f $(OBJ_L)
	@rm -Rf $(DIR_O_L)

fclean: clean
	@rm -f $(NAME)

re: fclean all
