NAME = bsq
SRC = src
ODIR = tmp
CFILES = 	main.c \
			lib.c \
			string.c \
			map.c \
			map_utils.c \
			square.c\
			char.c

OFILES = $(patsubst %.c, $(ODIR)/%.o, $(CFILES))
CFLAGS = -g -fsanitize=address -Wall -Wextra -Werror -I include

all: $(NAME)

$(NAME): $(OFILES)
	cc $(CFLAGS) -o $(NAME) $^

$(ODIR)/%.o: $(SRC)/%.c | $(ODIR)
	cc $(CFLAGS) -o $@ -c $<

$(ODIR):
	mkdir -p $(ODIR)

clean:
	rm -rf $(ODIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
