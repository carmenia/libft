NAME = libft.a
SRCS =
SRCO =
INCL = 

.PHONY all clean fclean re

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCL)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)

clean: 
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
