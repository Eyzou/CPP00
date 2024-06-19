NAME = Account

CC = c++

FLAGS = -g -Wall -Wextra -Werror -std=c++98

INCLUDES = Account.hpp

SRCS = 	Account.cpp\
		tests.cpp

OBJ = $(SRCS:%.cpp=%.o)

RM = rm -f


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
