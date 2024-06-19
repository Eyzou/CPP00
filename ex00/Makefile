NAME = megaphone

CC = c++

FLAGS = -Wall -Wextra -Werror -g -std=c++98

SRCS = megaphone.cpp

OBJ = $(SRCS:%.cpp=%.o)

RM = rm -f

all: ${NAME}

%.o: %.cpp
	$(CC) $(FLAGS) -O2 -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
