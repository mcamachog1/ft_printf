
NAME = test

MY_SOURCES = ft_putchar.c      ft_putnbr.c \
			ft_printf.c   ft_putnbr_base.c  ft_putstr.c \
			ft_helper_s.c ft_helper_p.c ft_helper_u.c ft_helper_x.c 

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(MY_OBJECTS)
		cc $(CFLAGS) $(MY_OBJECTS) -o $(NAME)

debug: $(MY_OBJECTS)
		cc -g $(MY_SOURCES) -o $(NAME)
clean:
		rm -f $(MY_OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all
