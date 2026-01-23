<<<<<<< HEAD
NAME = convert
=======
NAME = Serialization
>>>>>>> 203c00f3d20d3f960ceffb79d4c2912a65d7ae32
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Serializer.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

<<<<<<< HEAD
.PHONY : clean fclean all re
=======
.PHONY : clean fclean all re
>>>>>>> 203c00f3d20d3f960ceffb79d4c2912a65d7ae32
