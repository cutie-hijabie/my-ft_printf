NAME = libftprintf.a
SRC = handelers_cs.c\
	handles_id.c\
	handles_p.c\
	handles_u.c\
	handles_x.c\
	handles_X.c\
	ft_printf.c

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re