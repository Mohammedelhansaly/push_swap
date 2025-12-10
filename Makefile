CC = cc
CFLAGS = -Wall -Wextra -Werror
INC_DIR = include

SRCS = push_swap.c stack/push.c stack/pop.c stack/init.c \
	operations/sa.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS)  -c $< -o $@ -I $(INC_DIR)

$(NAME): $(OBJS)
	$(MAKE) -C libft
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C libft
	rm -rf $(OBJS) $(DEPS)

fclean: clean
	$(MAKE) fclean -C libft
	rm -rf $(NAME)

re: fclean all
.PHONY: all clean fclean re
