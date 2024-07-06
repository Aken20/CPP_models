NAME = megaphone
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = Megaphone.o

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $^ -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all