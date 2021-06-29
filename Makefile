NAME		=	push_swap

HEADER		=	./includes/

LIBFT		=	libft/libft.a

CC			=	gcc 

CFLAGS		=	-g -Wall -Wextra -Werror

SRCS		=	srcs/main.c \
				srcs/stack/clear.c \
				srcs/stack/new.c \
				srcs/stack/get_min.c \
				srcs/stack/get_max.c \
				srcs/stack/push_back.c \
				srcs/stack/push_front.c \
				srcs/stack/remove_front.c \
				srcs/stack/get_index_by_data.c \
				srcs/stack/get_data_by_index.c \
				srcs/sorting/sorting_three.c \
				srcs/sorting/sorting_five.c \
				srcs/sorting/sorting/sorting.c \
				srcs/sorting/sorting/chunk.c \
				srcs/sorting/sorting/check.c \
				srcs/sorting/sorting/push.c \
				srcs/parsing/parse.c \
				srcs/operation/pa.c \
				srcs/operation/pb.c \
				srcs/operation/ra.c \
				srcs/operation/rb.c \
				srcs/operation/rr.c \
				srcs/operation/rra.c \
				srcs/operation/rrb.c \
				srcs/operation/rrr.c \
				srcs/operation/sa.c \
				srcs/operation/sb.c \
				srcs/operation/ss.c \

OBJS		=	$(SRCS:.c=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(LIBFT) $(HEADER)
				$(CC) $(CFLAGS) -I $(HEADER) $(OBJS) -o $(NAME) $(LIBFT)

$(LIBFT)	:
				make -C ./libft

clean		:
				rm -rf $(OBJS)
				make clean -C ./libft

fclean		:	clean
				rm $(NAME)
				make fclean -C ./libft

re			:	fclean all
