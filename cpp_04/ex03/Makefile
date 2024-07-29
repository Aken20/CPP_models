NAME = test
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	IMateriaSource.cpp \
		MateriaSource.cpp \
		ICharacter.cpp \
		Character.cpp \
		AMateria.cpp \
		Cure.cpp \
		main.cpp\
		Ice.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all