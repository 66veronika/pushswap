NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
RM 			= rm -rf
INCLUDES	= -I.

SRCS		= parser.c\
			  push_swap.c\
			  operations.c\
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


OBJS		=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all