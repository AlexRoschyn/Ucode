#include <unistd.h>
void mx_printchar();

void mx_cube(int n) {
int h = n + n/2 + 2;
int w = n*2 + n/2 + 2;
int r;
int c;
if (n > 1) {
	for(r = 0; r <= h; r++) {
		for(c = 0; c <= w; c++) {
if (((r == 0) && (c == n/2 + 1)) || ((r == 0) && (c == w)) || ((r == n/2+1) && (c == 0)) ||
((r == n/2+1) && (c == w - n/2 - 1 )) || ((r == n+1) && (c == w)) || ((r == h) && (c == 0)) ||
((r == h) && (c == w - n/2 - 1))) {
	mx_printchar('+');
}
else if (((r == 0) && ((c > n/2) && (c < w))) || ((r == n/2+1) && ((c > 0) && (c < w - n/2))) ||
		((r == h) && ((c > 0) && (c < w - n/2)))) {
	mx_printchar('-');
}
else if ((((r > n/2 + 1) && (r < h)) && (c == 0)) || (((r > n/2 + 1) && (r < h)) && (c == w - n/2 - 1)) ||
              (((r > 0) && (r < h - n/2 - 1)) && (c == w))) {
	mx_printchar ('|');
}
else if ((((r > 0) && (r <= n/2)) && ((c > 0) && (c <= n/2)) && (r + c == n/2 + 1)) ||
              (((r > 0) && (r <= n/2)) && ((c >= w - n/2)) && (c < w) && (r + c == n/2 +  n*2 + 2)) ||
              ((((r >= h - n/2) && (r < h)) && ((c >= w - n/2)) && (c < w)) && (r + c == n + n*2 + n/2 + 3))) {
	mx_printchar ('/');
          }
          else {
	mx_printchar(' ');
}
}
	mx_printchar('\n');
}
}
}

