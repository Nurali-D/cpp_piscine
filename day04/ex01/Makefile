NAME = brain

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS = main.o Animal.o Cat.o Dog.o Brain.o

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