NAME = zombie
COMPILER = c++ -Wall -Wextra -Werror -std=c++98
SRC = *.cpp

all: $(NAME)

$(NAME):
	$(COMPILER) $(SRC) -o $(NAME)

clean:
	rm -rf zombie

re: clean all

.PHONY: all clean fclean re