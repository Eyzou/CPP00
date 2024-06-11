NAME = megaphone.exe

CC = c++

CFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRCS = megaphone.cpp

OBJ = $(SRCS:%.cpp=%.o)

ifeq ($(OS),Windows_NT)
    RM = del /Q
    RMDIR = rmdir /S /Q
else
    RM = rm -f
endif

all: ${NAME}

%.o: %.cpp
	$(CC) $(CFLAGS) -O2 -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
