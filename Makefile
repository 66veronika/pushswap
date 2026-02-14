NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
RM 			= rm -rf
INCLUDES	= -I.

SRCS		= parser.c\
			  sort.c\
			  stack.c\
			  nodes.c\
			  index.c\
			  ft_split.c\
			  error.c\
			  operations/push.c\
			  operations/swap.c\
			  operations/rotate.c\
			  operations/reverse_rotate.c\
			  main.c\


OBJS		=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all