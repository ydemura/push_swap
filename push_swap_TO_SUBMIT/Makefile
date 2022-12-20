NAME = push_swap
SRCS =	error_check.c \
		error_handling.c \
		push_swap.c \
		src/chunk.c \
		src/create_destroy_lst.c \
		src/decide_direction.c \
		src/handle_100_numbers.c \
		src/handle_five_numbers.c \
		src/handle_three_numbers.c \
		src/operations.c \
		src/pop_push_back_front.c \
		src/prepare_for_sorting.c \
		src/push_b_or_rotate_a.c \
		src/push_swap_functions_with_write.c \
		src/put_b_to_a.c \
		src/quicksort.c \

OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror -g
HEADER = src/*.h
CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -c -o $@ $< -I ./src

clean:
	rm -f $(OBJ)
	rm -f *.o

fclean: clean
	rm -f $(NAME)
	rm -f *.o

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
