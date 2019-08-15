#include "minilibmx.h"

char operator_randomaizer(int remainder)
{
    char *all_operator = "+*-/";
    int random = rand();
    random %= remainder;

    return all_operator[random];
}

