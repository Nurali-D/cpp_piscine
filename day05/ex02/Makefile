NAME = variousforms

SRCS = Bureaucrat.cpp Form.cpp main.cpp \
	PresidentialPardonForm.cpp \
	ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp
	
OBJS = $(SRCS:.cpp=.o)

DEPS = $(SRCS:.cpp=.d)

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -MMD -MP -c $< -o $@

-include $(DEPS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)
	rm -f *_shrubbery

re: fclean all