# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 16:34:50 by btan              #+#    #+#              #
#    Updated: 2023/09/07 12:08:24 by btan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#SRC = ft_atoi.c  ft_isalnum.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c  ft_isprint.c  ft_strlcpy.c  ft_strlen.c  ft_tolower.c  ft_toupper.c

SRC = $(wildcard *c)

CC = clang

CFLAGS = -Wall -Werror -Wextra

OBJECTS = $(SRC:.c=.o)

all: $(NAME) 

.c.o:
	$(CC) $(CFLAGS) -o $(NAME) -c $< -o $(@:.c=.o)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test:
	cc tests/test.c -L -l libft.a
