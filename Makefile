#REMOVE !!
TEST = test

LIBFT = libft/libft.a

CHECKER = checker

PUSH_SWAP = push_swap

CHECKER_REP = checker_srcs/

CHECKER_SRCS = $(CHECKER_REP)checker_exec.c \
			   $(CHECKER_REP)checker_main.c \
			   $(CHECKER_REP)checker_find_op.c \
			   $(CHECKER_REP)checker_read_instructions.c

CHECKER_O_FILES = $(SRCS:.c=.o)

GLOBAL_REP = srcs/

GLOBAL_SRCS = $(GLOBAL_REP)push.c \
			  $(GLOBAL_REP)reverse_rotate.c \
			  $(GLOBAL_REP)rotate.c \
			  $(GLOBAL_REP)sort_analysis.c \
			  $(GLOBAL_REP)swap.c \
			  $(GLOBAL_REP)convert_to_value.c \
			  $(GLOBAL_REP)tools.c \
			  $(GLOBAL_REP)read_pile.c

GLOBAL_O_FILES = $(CHECKER_SRCS:.c=.o)

INCLUDE = -I includes/

W_FLAGS = -Wall -Werror -Wextra

%.o:%.c
	gcc -c $< -o $@

# MAKE

#REMOVE !!
$(TEST):
	cd libft && make
	gcc main_test.c $(INCLUDE) $(GLOBAL_SRCS) $(CHECKER_SRCS) $(LIBFT) -o $(TEST)

$(LIBFT):
	cd libft && make

$(CHECKER):
	gcc $(CHECKER_SRCS) $(GLOBAL_SRCS) -o $(CHECKER) $(INCLUDE)

# COMMON RULES

all: $(CHECKER)

clean:
	cd libft && make clean
	rm -rf $(GLOBAL_O_FILES) $(CHECKER_O_FILES)

fclean: clean
	cd libft && make fclean
	rm -rf $(CHECKER) $(PUSH_SWAP) $(TEST)

re: fclean all
