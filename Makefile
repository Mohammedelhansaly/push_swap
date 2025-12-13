CC = cc
CFLAGS = -Wall -Wextra -Werror
INC_DIR = include

SRCS = main.c \
	stack/push.c stack/pop.c stack/init.c \
	operations/swap_stack.c operations/rotate_stack.c operations/rotate_reverse_stack.c operations/push_to_other_stack.c  \
	parsing/sa.c parsing/sb.c parsing/ss.c parsing/pa.c parsing/pb.c parsing/ra.c parsing/rb.c parsing/rr.c parsing/rra.c parsing/rrb.c parsing/rrr.c \
	sort/sort_three.c sort/sort_four.c  sort/sort_five.c sort/sort_chunk.c\
	utils/swap.c utils/ft_atoi.c utils/ft_putstr.c utils/ft_is_digit.c utils/indexing.c

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
