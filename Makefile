NAME = gnl

LIBDIR = libft

OBJ = get_next_line.o test.o

CFLAGS += -Wall -Wextra -Werror

LIB = libft.a

all: $(NAME)

$(NAME): $(LIBDIR)/$(LIB) $(OBJ)
	@echo [CC] [BINARY] $(NAME)
	@gcc $(OBJ) $(LIBDIR)/$(LIB) -o $(NAME)

%.o: %.c
	@echo [CC] $@
	@gcc $(CFLAGS) $< -c -o $@

$(LIBDIR)/$(LIB):
	@cd libft && make

clean:
	@echo [RM] "*.o"
	@rm -f $(OBJ)
	@cd libft && make clean

fclean: clean
	@echo [RM] $(NAME)
	@rm -f $(NAME)
	@cd libft && make fclean

re: fclean all
