#include "minilibmx.h"

WINDOW *create_newwin(int height, int width, int starty, int startx)
{	WINDOW *local_win;

	local_win = newwin(height, width, starty, startx);
	wrefresh(local_win);		/* Show that box 		*/

	return local_win;
}

