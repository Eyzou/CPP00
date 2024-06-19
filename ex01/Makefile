NAME = PhoneBook

CC = c++

FLAGS = -Wall -Wextra -Werror -g -std=c++98

INCLUDES = 	include/Contact.hpp \
			include/PhoneBook.hpp

SRCS = 	srcs/PhoneBook.cpp \
		srcs/Contact.cpp \
		srcs/main.cpp

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
