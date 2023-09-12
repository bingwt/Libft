# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 16:34:50 by btan              #+#    #+#              #
#    Updated: 2023/09/12 11:49:28 by btan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#SRCS = ft_atoi.c  ft_isalnum.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c  ft_isprint.c  ft_strlcpy.c  ft_strlen.c  ft_tolower.c  ft_toupper.c

SRCS = $(wildcard *c)

CC = cc

CFLAGS = -Wall -Werror -Wextra

OBJECTS = $(SRCS:.c=.o)

all: $(NAME) 

.c.o:
	$(CC) $(CFLAGS) -o $(NAME) -c $< -o $(@:.c=.o) -g

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test:
	$(CC) $(CFLAGS) tests/test.c -L -l $(NAME)
debug:	re
	$(CC) -g $(CFLAGS) tests/test.c -L -l $(NAME) -o debug.out && gdb --tui debug.out
run: test
	clear && ./a.out
