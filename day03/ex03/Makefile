NAME = diamondtrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS = main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o

FLAG = -Wall -Werror -Wextra -std=c++98 -Wshadow

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