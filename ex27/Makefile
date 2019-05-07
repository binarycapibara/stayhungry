# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/17 21:31:30 by fjenae            #+#    #+#              #
#    Updated: 2019/04/21 19:19:11 by fjenae           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES_DIR = srcs/

SOURCES = ft_putchar.c ft_display_file.c ft_putstr.c

INCLUDES = -I includes/

OBJECTS = $(SOURCES:.c=.o)
SOURCES_LIST = $(addprefix $(SOURCES_DIR), $(SOURCES))

NAME = ft_display_file

all: $(NAME)

$(NAME): $(SOURCES_LIST)
	gcc main.c -o $(NAME) $(SOURCES_LIST) $(INCLUDES)
	
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
