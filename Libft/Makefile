# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/09 14:12:19 by macamach          #+#    #+#              #
#    Updated: 2025/10/28 15:21:10 by macamach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Executable name
NAME = libft.a

# Compiler command
CC = cc

# Standard and warning flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c

# Bonus Source files
BONUS_SRCS = ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstmap_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstnew_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstsize_bonus.c

# Object files (Mandatory)
OBJS = $(SRCS:.c=.o)

# Object files (Bonus Part)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Header directory for includes
INCLUDES = -I includes

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# New target to build the library including BONUS objects
.bonus: $(OBJS) $(BONUS_OBJS)
	@touch .bonus 
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS) .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: .bonus

# Phony targets prevent conflicts with files that might have the same name
.PHONY: all clean fclean re
