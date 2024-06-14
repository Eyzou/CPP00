NAME = Account

CC = c++

FLAGS = -Wall -Wextra -Werror -g -std=c++98

INCLUDES = Account.hpp

SRCS = 	Account.cpp

OBJ = $(SRCS:%.cpp=%.o)

ifeq ($(OS),Windows_NT)
    RM = del /Q
    RMDIR = rmdir /S /Q
else
    RM = rm -f
endif

all: ${NAME}

srcs/%.o: %.cpp
	$(CC) $(FLAGS) $(INCLUDES) -O2 -c $< -o $< -o $(<:%.cpp=%.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
