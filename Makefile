CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC_DIR = ./
OBJ_DIR = objs/

SRCS = ft_strlen.c ft_toupper.c ft_tolower.c ft_strcmp.c ft_strncmp.c ft_abs.c \
	ft_intlen.c ft_itoa.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_atoi.c ft_strcat.c ft_strncat.c ft_strstr.c ft_strnstr.c \
	ft_strchr.c ft_strrchr.c ft_strlcat.c ft_strcpy.c ft_strncpy.c ft_strdup.c \
	ft_strndup.c ft_memccpy.c
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
MKDIR_P = mkdir -p

.PHONY: dirs clean fclean re

all: dirs $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS): $(OBJ_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-rm -rf $(OBJ_DIR)

fclean: clean
	-rm -f $(NAME)

re: fclean all

dirs: $(OBJ_DIR)

$(OBJ_DIR):
	$(MKDIR_P) $(OBJ_DIR)
