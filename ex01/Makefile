NAME = PhoneBook

CC = c++

FLAGS = -Wall -Wextra -Werror -g -std=c++98
INCLUDE = contact.hpp phonebook.hpp

SRCS = phonebook.cpp

OBJ = $(SRCS:%.cpp=%.o)

ifeq ($(OS),Windows_NT)
    RM = del /Q
    RMDIR = rmdir /S /Q
else
    RM = rm -f
endif

all: ${NAME}

%.o: %.cpp
	$(CC) $(FLAGS) -O2 -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
