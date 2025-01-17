#	Compilation
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
COMPILE	=	$(CC) $(CFLAGS)

#	Directories
SRC_DIR	=	src
OBJ_DIR	=	obj
BIN_DIR	=	bin
HDR_DIR	=	includes

#	Files
SRCS	=	\
			$(SRC_DIR)/assert_are_equal.c \
			$(SRC_DIR)/assert_greater_than.c \
			$(SRC_DIR)/assert_is_false.c \
			$(SRC_DIR)/assert_is_null.c \
			$(SRC_DIR)/assert_is_true.c \
			$(SRC_DIR)/assert_lesser_than.c \
			$(SRC_DIR)/assert_not_equal.c \
			$(SRC_DIR)/assert_not_null.c \
			$(SRC_DIR)/print_error.c \
			$(SRC_DIR)/print_ok.c \

OBJS	=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

#	Targets
NAME	=	testlib.a
TARGET	=	$(BIN_DIR)/$(NAME)

#	Default target
all: $(NAME)

#	Name target
$(NAME): $(OBJS)
	mkdir -p $(BIN_DIR)
	ar -rcs $(TARGET) $(OBJS)

#	Object compilation target
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(COMPILE) -o $@ -c $< -I $(HDR_DIR)

#	Clean object files
clean:
	rm -f $(OBJ_DIR)

#	Clean object files and binary files
fclean:	clean
	rm -f $(BIN_DIR)

#	Recompile all
re:	fclean all

#	Ignore files with same name as targets
.PHONY:	all	clean fclean re