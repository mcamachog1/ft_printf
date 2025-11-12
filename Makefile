
NAME = test

MY_SOURCES = ft_putchar_fd_helper.c      ft_putnbr_fd_helper.c \
			ft_printf.c   ft_putnbr_base_fd_helper.c  ft_putstr_fd_helper.c


#MY_OBJECTS = ft_putchar_fd_helper.o      ft_putnbr_fd_helper.o \
			ft_printf.o   ft_putnbr_base_fd_helper.o  ft_putstr_fd_helper.o

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CUR_DIR = $(shell pwd)

all: $(NAME)

$(NAME): $(MY_OBJECTS)
		cc $(CFLAGS) $(MY_OBJECTS) -o $(NAME)

my_rule:
		@echo Estos son mis objetos: $(MY_OBJECTS)
clean:
		rm -f $(MY_OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all
