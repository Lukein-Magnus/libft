NAME= libft.a
SRCS= *.c
OBJS= *.o
FLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
