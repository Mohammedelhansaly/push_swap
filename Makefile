CC = cc
CFLAGS = -Wall -Wextra -Werror
INC_DIR = include
INC_DIR_B = bonus

SRCS = push_swap.c bonus/checker_utlis.c\
	stack/push.c  stack/init.c stack/size.c stack/free.c \
	operations/swap_stack.c operations/rotate_stack.c operations/rotate_reverse_stack.c operations/push_to_other_stack.c  \
	parsing/sa.c parsing/sb.c parsing/ss.c parsing/pa.c parsing/pb.c parsing/ra.c parsing/rb.c parsing/rr.c parsing/rra.c parsing/rrb.c parsing/rrr.c parsing/error.c \
	utils/swap.c utils/ft_memcpy.c utils/ft_strlen.c utils/ft_atoi.c utils/ft_putstr.c utils/ft_is_digit.c utils/ft_split.c utils/ft_strdup.c utils/ft_strjoin.c utils/ft_is_space.c utils/ft_strcmp.c\
	sort/small_sort.c sort/large_sort.c sort/sorted_stack.c sort/sort_utils.c sort/push_element_to_b.c sort/push_element_to_a.c \
	input/check_input.c
SRCSB = bonus/checker_bonus.c bonus/checker_utlis.c \
	bonus/stack/push.c  bonus/stack/init.c bonus/stack/size.c bonus/stack/free.c \
	bonus/operations/swap_stack.c bonus/operations/rotate_stack.c bonus/operations/rotate_reverse_stack.c bonus/operations/push_to_other_stack.c  \
	bonus/parsing/sa.c bonus/parsing/sb.c bonus/parsing/ss.c bonus/parsing/pa.c bonus/parsing/pb.c bonus/parsing/ra.c bonus/parsing/rb.c bonus/parsing/rr.c bonus/parsing/rra.c bonus/parsing/rrb.c bonus/parsing/rrr.c bonus/parsing/error.c \
	bonus/utils/swap.c bonus/utils/ft_memcpy.c bonus/utils/ft_strlen.c bonus/utils/ft_atoi.c bonus/utils/ft_putstr.c bonus/utils/ft_is_digit.c bonus/utils/ft_split.c bonus/utils/ft_strdup.c bonus/utils/ft_strjoin.c bonus/utils/ft_is_space.c bonus/utils/ft_strcmp.c bonus/utils/ft_strchr.c \
	bonus/input/check_input.c \
	GetNextLine/get_next_line.c
OBJS = $(SRCS:.c=.o)
OBJSB = $(SRCSB:.c=.o)


NAME = push_swap
BONUS = checker

$(NAME) :
	$(CC) $(CFLAGS) $(SRCS) -I $(INC_DIR) -o $(NAME)

all : $(NAME)

$(BONUS) :
	$(CC) $(CFLAGS) $(SRCSB) -I $(INC_DIR_B) -o $(BONUS)
bonus : $(BONUS)

clean :
	$(RM) $(OBJS) $(OBJSB)

fclean : clean
	$(RM) $(NAME) $(BONUS)

re : fclean all

.PHONY: all clean fclean re
