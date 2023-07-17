NAME = ft_display_file
C_FILE = display_file.c
CC = gcc
FLAGS = -Wall -Werror -Wextra

HEADER = ./includes/

SOURCES = \
	./sources/domingo.c \

OBJECTS = \
	domingo.o \

all: $(NAME)
	
$(NAME):
	$(CC) $(FLAGS) -c $(SOURCES) -I $(HEADER)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECTS)
	$(CC) $(FLAGS) -o $(NAME) $(C_FILE)

clean:
	rm -f  $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all