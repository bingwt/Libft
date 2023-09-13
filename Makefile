# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 16:34:50 by btan              #+#    #+#              #
#    Updated: 2023/09/13 17:23:26 by btan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =  ft_atoi.c \
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
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

BONUS_SRCS = ft_lstnew_bonus.c \
	     #ft_lstadd_front

CC = cc

CFLAGS = -Wall -Werror -Wextra

OBJECTS = $(SRCS:.c=.o)

BONUS_OBJECTS = $(BONUS_SRCS:.c=.o)

all: $(NAME) 

.c.o:
	$(CC) $(CFLAGS) -o $(NAME) -c $< -o $(@:.c=.o) -g

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

bonus: $(NAME) $(BONUS_OBJECTS)
	$(CC) $(CFLAGS) -c $(BONUS_SRCS) -I./
	ar rc $(NAME) $(OBJECTS) $(BONUS_OBJECTS)

clean:
	rm -rf $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test:
	$(CC) $(CFLAGS) tests/test.c -L -l $(NAME)
debug:	re
	$(CC) -g $(CFLAGS) tests/test.c -L -l $(NAME) -o debug.out && gdb --tui debug.out
run: test
	clear && ./a.out
