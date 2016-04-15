NAME = Sully

CC = clang -Wall -Wextra -Werror

SRC := Sully.c
OBJ = Sully.o

%.o: %.c
	@$(CC) -o $@ -c $<

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) -o $@ $^
	@echo "\033[0;32m$(NAME) : Compilation successful !! \033[0;32m"

clean:
	@rm $(OBJ)

fclean: clean
	@rm $(NAME)

re: fclean all

.PHONY: all clean fclean re