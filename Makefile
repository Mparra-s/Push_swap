NAME	=	push_swap						

SRCS	=  	push_swap.c\
			push_swap_val.c\
			utils_list.c\
			utils.c\
			chunk_algorythm.c\
			chunk_utils.c\
			small_n_algorythm.c\
			push.c\
			rotate.c\
			swap.c\
			reverse.c\
		
OBJS	=	$(SRCS:.c=.o)					

CC	=	cc									

RM	=	rm -f								

CFLAGS	=	-Wall -Wextra -Werror

LIBFT_DIR =	Libft

LIBFT = $(LIBFT_DIR)/libft.a

all	:	$(NAME)									

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -v -o $(NAME) $(OBJS) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_DIR)		

%.o: %.c									
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	make clean -C $(LIBFT_DIR)									
	$(RM) $(OBJS)

fclean	: clean
	make fclean -C $(LIBFT_DIR)							
	$(RM) $(NAME)

re	:	fclean all							

.PHONY	:	all clean fclean re	
