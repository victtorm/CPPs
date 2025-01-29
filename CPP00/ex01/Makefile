SRCS = PhoneBook.cpp main.cpp Contact.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = phonebook
CC = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPP_FLAGS) $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp	
	$(CC) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re