CC = gcc
CFLAGS = -Wall -Wextra -Werror

# end point file names
NAME = libft.a
TEST_NAME = testlib

# Directories, library and tests
SRC_DIR = ./
OBJ_DIR = objs/
TEST_DIR = tests/
TEST_OBJ_DIR = $(OBJ_DIR)tests/
INC_DIR = tests/includes

# Files, library and tests
SRCS = ft_strlen.c ft_toupper.c ft_tolower.c ft_strcmp.c ft_strncmp.c ft_abs.c \
	ft_intlen.c ft_itoa.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_atoi.c ft_strcat.c ft_strncat.c ft_strstr.c ft_strnstr.c \
	ft_strchr.c ft_strrchr.c
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
TEST_SRCS = $(addprefix $(TEST_DIR), $(SRCS) test_main.c testers.c)
TEST_OBJS = $(addprefix $(TEST_OBJ_DIR), $(SRCS:.c=.o) test_main.o testers.o)
MKDIR_P = mkdir -p

.PHONY: dirs clean fclean re

all: dirs $(NAME)

# Create static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(OBJ_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Phony clean and make directives
clean:
	-rm -f $(OBJS)
	-rm -f $(TEST_OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST_NAME)

re: fclean all

runtest: $(TEST_NAME)
	./$(TEST_NAME)
# Create test excecutable
test: all $(TEST_NAME)

$(TEST_NAME): $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $(TEST_NAME) $(TEST_OBJS) -L. -lft -I $(INC_DIR)

$(TEST_OBJS): $(TEST_OBJ_DIR)%.o : $(TEST_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)


# Creates necessary directories as needed, ex. for objects.
dirs: $(OBJ_DIR) $(TEST_OBJ_DIR)

$(OBJ_DIR):
	$(MKDIR_P) $(OBJ_DIR)

$(TEST_OBJ_DIR):
	$(MKDIR_P) $(TEST_OBJ_DIR)
