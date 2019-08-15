NAME = EndGame

# FLAG = -Wall -Wextra -Werror -Wpedantic

NCUR = -lncurses

SRC = *.c

HEAD = *.h

RUN = clang

OBJ	= *.o

all: $(NAME)

# %.o : %.c
# 	@$(RUN) $(FLAG) -o $@ -c $<

$(NAME):
	# @$(RUN) $(HEAD) $(FLAG) $(NCUR) $(OBJ) -o $(NAME)
	@$(RUN) $(SRC) $(HEAD) $(NCUR)
	@echo "EndGame compiled"

#$(RUN) −lncurses $(OBJ) -o $(NAME)
#@ar rc $(NAME) $(OBJ_PF) $(OBJ_LIB). #$(FLAG) -lncurses

clean:
	@rm -f $(OBJ)
	@echo "EndGame cleaned"

fclean: clean
	@rm -f a.out
	@echo "EndGame fcleaned"

re:	fclean all
