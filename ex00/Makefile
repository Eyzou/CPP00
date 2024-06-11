NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -g -std=c++98
INCLUDE = -I philo.h

SRCS = megaphone.cpp

OBJ =		$(SRCS:%.c=%.o)

all: ${NAME}

srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -O2 -c $< -o $(<:%.c=%.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ) 

fclean: clean
	rm -f $(NAME) 
	
re:	fclean all

.PHONY: all clean fclean re
