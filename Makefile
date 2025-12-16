CC = cc
CFLAGS = -Wall -Wextra -Werror
INC_DIR = include

SRCS = push_swap.c \
	stack/push.c  stack/init.c stack/size.c stack/free.c \
	operations/swap_stack.c operations/rotate_stack.c operations/rotate_reverse_stack.c operations/push_to_other_stack.c  \
	parsing/sa.c parsing/sb.c parsing/ss.c parsing/pa.c parsing/pb.c parsing/ra.c parsing/rb.c parsing/rr.c parsing/rra.c parsing/rrb.c parsing/rrr.c parsing/error.c \
	utils/swap.c utils/ft_memcpy.c utils/ft_strlen.c utils/ft_atoi.c utils/ft_putstr.c utils/ft_is_digit.c utils/ft_split.c utils/ft_strdup.c utils/ft_strjoin.c utils/ft_is_space.c utils/ft_strcmp.c\
	sort/small_sort.c sort/large_sort.c sort/sorted_stack.c sort/sort_utils.c sort/push_element_to_b.c sort/push_element_to_a.c \
	input/check_input.c
OBJS = $(SRCS:.c=.o)

NAME = push_swap

$(NAME) :
	$(CC) $(CFLAGS) $(SRCS) -I $(INC_DIR) -o $(NAME)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(NAME)

re : fclean all
.PHONY: all clean fclean re
