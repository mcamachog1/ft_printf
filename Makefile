
NAME = test

MY_SOURCES = ft_putchar.c      ft_putnbr.c \
			ft_printf.c   ft_putnbr_base.c  ft_putstr.c \
			ft_helper_s.c ft_helper_p.c ft_helper_u.c ft_helper_x.c


#MY_OBJECTS = ft_putchar.o      ft_putnbr.o \
			ft_printf.o   ft_putnbr_base.o  ft_putstr.o ft_helper_s.o

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CUR_DIR = $(shell pwd)

all: $(NAME)

$(NAME): $(MY_OBJECTS)
		cc $(CFLAGS) $(MY_OBJECTS) -o $(NAME)

debug: $(MY_OBJECTS)
		cc -g $(MY_SOURCES) -o $(NAME)
my_rule:
		@echo Estos son mis objetos: $(MY_OBJECTS)
clean:
		rm -f $(MY_OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all
