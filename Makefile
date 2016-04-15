COL = "Colleen"
G = "Grace"
SUL = "Sully"

all:
	@cd $(COL) && make
	@cd $(G) && make
	@cd $(SUL) && make

clean:
	@cd $(COL) && make clean
	@cd $(G) && make clean
	@cd $(SUL) && make clean

fclean: clean
	@cd $(COL) && rm $(COL)
	@cd $(G) && rm $(G)
	@cd $(SUL) && rm $(SUL)

re: fclean all

.PHONY: all clean fclean re