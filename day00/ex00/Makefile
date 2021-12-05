NAME = megaphone

SRCS = megaphone.cpp \

OBJS = megaphone.o

FLAG = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAG) $(OBJS) -o $(NAME)

%.o: %.cpp
	clang++ $(FLAG) $(SRCS) -c

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
