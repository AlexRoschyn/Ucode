#include<unistd.h>

void race00(int map_length, int map_width, int one_y, int one_x);

int main() {
	race00(4, 5, 1, 1);
}
