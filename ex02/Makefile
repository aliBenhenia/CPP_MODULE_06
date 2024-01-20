NAME = fixed
CC = c++
RM = rm -f
CFLAGS = #-Wall -Wextra -Werror -std=c++98
SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp IdentificationFunctions.cpp RandomGenerator.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Base.hpp   A.hpp B.hpp C.hpp IdentificationFunctions.hpp RandomGenerator.hpp 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
