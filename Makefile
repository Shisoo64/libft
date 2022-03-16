NAME = libft

SRC = main.c

all: $(NAME)

$(NAME):
        @gcc -o $(NAME) $(SRC)

clean:
        @rm -f *.o

fclean:
        @rm -f $(NAME)
