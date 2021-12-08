NAME = claptrap

SRCS = main.cpp ClapTrap.cpp
OBJS = main.o ClapTrap.o

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