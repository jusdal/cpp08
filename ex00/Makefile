# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/28 18:00:16 by justindaly        #+#    #+#              #
#    Updated: 2024/06/28 18:00:41 by justindaly       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRC_FILES = main

SRC = $(SRC_FILES:=.cpp)
OBJ_FILES = $(SRC_FILES:=.o)
HEADER = easyfind.hpp

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CPPFLAGS) $(OBJ_FILES) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CPPFLAGS) -c $< -o $@
	
clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re