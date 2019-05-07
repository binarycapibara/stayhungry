# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/16 20:24:44 by fjenae            #+#    #+#              #
#    Updated: 2019/04/18 21:53:07 by fjenae           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES_DIR = srcs/

SOURCES = ft_swap.c ft_strlen.c ft_strcmp.c\
	  ft_putstr.c ft_putchar.c


INCLUDES = -I includes/

OBJECTS = $(SOURCES:.c=.o)
SOURCES_LIST = $(addprefix $(SOURCES_DIR), $(SOURCES))

NAME = libft.a

all: $(NAME)

$(NAME): $(SOURCES_LIST)
	gcc -c $(SOURCES_LIST) $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all