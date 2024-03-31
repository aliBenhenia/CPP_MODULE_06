# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 22:08:55 by abenheni          #+#    #+#              #
#    Updated: 2024/03/29 22:07:17 by abenheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CC = c++
RM = rm -f
OBJ_DIR = objects 
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  main.cpp ScalarConverter.cpp
OBJ = $(SRC:%.cpp=%.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME) 
%.o : %.cpp ScalarConverter.hpp
	$(CC) $(CFLAGS)  -c $< -o $@
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all