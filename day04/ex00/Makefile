NAME = animal

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = main.o Animal.o Cat.o Dog.o WrongAnimal.o WrongCat.o

FLAG = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAG) $(OBJS) -o $(NAME)

%.o: %.cpp
	c++ $(FLAG) $(SRCS) -c

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all