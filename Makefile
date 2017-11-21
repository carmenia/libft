NAME = libft.a

SRCS = ft_atoi.c			\
	   ft_memcpy.c			\
	   ft_bzero.c			\
	   ft_factorial.c		\
	   ft_isalnum.c			\
	   ft_isalpha.c			\
	   ft_isascii.c			\
	   ft_isdigit.c			\
	   ft_islower.c			\
	   ft_isupper.c			\
	   ft_memcmp.c			\
	   ft_memccpy.c			\
	   ft_memchr.c			\
	   ft_memmove.c			\
	   ft_power.c			\
	   ft_strlcat.c			\
	   ft_strcpy.c			\
	   ft_strnstr.c			\
	   ft_strncpy.c			\
	   ft_strcmp.c			\
	   ft_strdup.c			\
	   ft_swap_int.c		\
	   ft_strcat.c			\
	   ft_strstr.c			\
	   ft_strlen.c			\
	   ft_toupper.c			\
	   ft_tolower.c			\
	   ft_swap_str.c		\
	   ft_strrchr.c			\
	   ft_strncmp.c			\
	   ft_strncat.c			\
	   ft_strchr.c			\
	   ft_sqrt.c			\
	   ft_rev.c				\
	   ft_memset.c			\
	   ft_isprint.c			\

SRCO = $(SRCS:.c=.o)

INCL = -I ./libft.h

.PHONY: all clean fclean re

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
