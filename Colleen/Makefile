NAME = Colleen

CC = clang -Wall -Wextra -Werror

SRC := Colleen.c
OBJ = Colleen.o

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