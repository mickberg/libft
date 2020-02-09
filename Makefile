# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberglun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/02 17:10:30 by mberglun          #+#    #+#              #
#    Updated: 2020/02/07 20:40:16 by mikaelber        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC_DIR = ./srcs/
OBJ_DIR = ./objs/
INC_DIR = ./
PRINTF_DIR = ./ft_printf/

SRC_FILES = ft_strlen.c ft_toupper.c ft_tolower.c ft_strcmp.c ft_strncmp.c ft_abs.c \
	ft_intlen.c ft_itoa.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_atoi.c ft_strcat.c ft_strncat.c ft_strstr.c ft_strnstr.c \
	ft_strchr.c ft_strrchr.c ft_strlcat.c ft_strcpy.c ft_strncpy.c ft_strdup.c \
	ft_memccpy.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c \
	ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
	ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
	ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_putchar.c ft_putstr.c ft_putendl.c \
	ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
	ft_pow.c ft_strndup.c ft_min.c ft_max.c ft_sqrt.c \
	get_next_line.c ft_strescape.c ft_strcc.c ft_isspecial.c
HDR_FILES = libft.h ft_printf.h

INCS = $(addprefix $(INC_DIR), $(HDR_FILES));
OBJS = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@make -C $(PRINTF_DIR)

$(OBJS): $(OBJ_DIR)%.o : $(SRC_DIR)%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@make -C $(PRINTF_DIR) clean

fclean: clean
	@rm -f $(NAME)

re: fclean all
