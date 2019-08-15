NAME = EndGame


NCUR = -lncurses

SRC =	src/arg2_randomaizer.c \	
	src/calculation_result.c \
	src/characters1.c \
	src/create_newwin.c \
	src/end_logo.c \
	src/endgame_1.c \
	src/numbers1.c \
	src/operator_randomizer.c \
	src/play_stop_music.c \
	src/rain.c \
	src/user_result.c \

INC =	inc/minilibmx.h

CFLAGS =	-std=c11 -Wall -Wextra -Werror -Wpedantic

all: 	install clean
install:
	@clang $(NCUR) $(CFLAGS) -o $(NAME) $(SRCS) -I $(INC)
	@echo "EndGame compiled"

unistall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf minilibmx.h
	@rm -rf EndGame
reinstall: uninstall clean all
