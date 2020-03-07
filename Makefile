# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/17 13:02:34 by ymanilow          #+#    #+#              #
#    Updated: 2020/03/07 14:11:27 by ymanilow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

DIR_HEAD = includes/

FLAGS = -Wall -Wextra -Werror -I $(DIR_HEAD)

DIR_OBJ_MEM = mem_obj/

DIR_OBJ_STR = str_obj/

DIR_OBJ_PRINTF = printf_obj/

DIR_OBJ_LIST = list_obj/

DIR_OBJ_OTHER = other_obj/

DIR_SRCS = srcs/

DIR_PRINTF = $(DIR_SRCS)printf_ft/

DIR_STR = $(DIR_SRCS)str_ft/

DIR_MEM = $(DIR_SRCS)mem_ft/

DIR_LIST = $(DIR_SRCS)list_ft/

DIR_OTHER = $(DIR_SRCS)other_ft/


SRCS_MEM = ft_memcmp.c		ft_memset.c		ft_memcpy.c				\
ft_memchr.c		ft_memccpy.c	ft_memmove.c	ft_malloc_store.c	\
ft_memalloc.c	ft_memnchr.c	ft_memrchr.c						\

SRCS_PRINTF = ft_printf.c	ft_unsigneditoa_base.c	list_filling_functions.c\
list_functions.c	output_digital.c	output.c	parsing.c	pointer.c	\
string.c	ft_char.c	double.c	double1.c	double2.c	color_work.c	\
output_bits.c	usage_flags.c												\

SRCS_LIST = ft_lstnew.c		ft_lstmap.c		ft_lstadd.c		\
ft_lstpop.c		ft_lstiter.c	ft_lstsize.c				\
ft_lstpurge.c	ft_lstdelete.c	ft_lstextend.c				\
ft_lstdelone.c	ft_lstappend.c	ft_lstpopback.c				\

SRCS_STR = ft_strrev.c		ft_strcmp.c		ft_strdel.c		\
ft_strcpy.c		ft_strlen.c		ft_strstr.c		\
ft_strchr.c		ft_strsub.c		ft_strequ.c		\
ft_strnew.c		ft_strmap.c		ft_strcat.c		\
ft_strdup.c		ft_strclr.c		ft_striter.c	\
ft_strnequ.c	ft_strncmp.c	ft_strncat.c	\
ft_strjoin.c	ft_strrchr.c	ft_strnstr.c	\
ft_strlcat.c	ft_strmapi.c	ft_strncpy.c	\
ft_strtrim.c	ft_striteri.c	ft_strsplit.c	\

SRCS_OTHER = ft_abs.c	ft_error.c	ft_swap.c	\
ft_dpow.c	ft_ipow.c	ft_free.c				\
ft_sizeof_num.c	ft_print_bits.c					\
ft_tolower.c	ft_toupper.c	ft_count_words.c\
ft_isalnum.c	ft_isalpha.c	ft_isascii.c	\
ft_isdigit.c	ft_isprint.c	ft_isspace.c	\
ft_putnbr.c		ft_putstr.c		ft_putchar.c	\
ft_putendl.c	ft_putnbr_fd.c	ft_putstr_fd.c	\
ft_putendl_fd.c	ft_putchar_fd.c	ft_atoi_base.c	\
ft_atoi.c		ft_itoa.c		ft_mitoa.c		\
ft_min.c	ft_max.c	ft_maxn.c	ft_minn.c	\
ft_dlstnew.c	ft_dlstnew.c	ft_dlstiter.c	\
ft_dlstsize.c	ft_dlstpurge.c	ft_dlstappend.c	\
ft_get_next_line.c	ft_mod_num.c	ft_is_hex.c \
ft_check_num.c		ft_pow.c					\
ft_count_symbol.c								\

OBJ_PRINTF = $(addprefix $(DIR_OBJ_PRINTF),$(SRCS_PRINTF:.c=.o))

OBJ_LIST = $(addprefix $(DIR_OBJ_LIST),$(SRCS_LIST:.c=.o))

OBJ_MEM = $(addprefix $(DIR_OBJ_MEM),$(SRCS_MEM:.c=.o))

OBJ_STR = $(addprefix $(DIR_OBJ_STR),$(SRCS_STR:.c=.o))

OBJ_OTHER = $(addprefix $(DIR_OBJ_OTHER),$(SRCS_OTHER:.c=.o))

all: $(NAME)

$(DIR_OBJ_LIST)%.o: $(DIR_LIST)%.c
	@mkdir -p $(DIR_OBJ_LIST)
	@$(CC) $(FLAGS) -o $@ -c $<

$(DIR_OBJ_MEM)%.o: $(DIR_MEM)%.c
	@mkdir -p $(DIR_OBJ_MEM)
	@$(CC) $(FLAGS) -o $@ -c $<

$(DIR_OBJ_STR)%.o: $(DIR_STR)%.c
	@mkdir -p $(DIR_OBJ_STR)
	@$(CC) $(FLAGS) -o $@ -c $<

$(DIR_OBJ_OTHER)%.o: $(DIR_OTHER)%.c
	@mkdir -p $(DIR_OBJ_OTHER)
	@$(CC) $(FLAGS) -o $@ -c $<

$(DIR_OBJ_PRINTF)%.o: $(DIR_PRINTF)%.c
	@mkdir -p $(DIR_OBJ_PRINTF)
	@$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ_LIST) $(OBJ_MEM) $(OBJ_STR) $(OBJ_OTHER) $(OBJ_PRINTF)
	@ar rc $(NAME) $(OBJ_LIST) $(OBJ_MEM) $(OBJ_STR) $(OBJ_OTHER) $(OBJ_PRINTF)
	@ranlib $(NAME)


norme:
	norminette ./$(DIR_LIST)
	@echo
	norminette ./$(DIR_MEM)
	@echo
	norminette ./$(DIR_STR)
	@echo
	norminette ./$(DIR_OTHER)
	@echo
	norminette ./$(DIR_PRINTF)
	@echo

clean:
	@rm -Rf $(DIR_OBJ_LIST)
	@rm -Rf $(DIR_OBJ_MEM)
	@rm -Rf $(DIR_OBJ_STR)
	@rm -Rf $(DIR_OBJ_OTHER)
	@rm -Rf $(DIR_OBJ_PRINTF)

fclean: clean
	@rm -f $(NAME)

re: fclean all
