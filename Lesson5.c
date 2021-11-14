#include <stdio.h>
#include <stdlib.h>

int Lesson5(void)
{
    // random
    srand(time(NULL));
    int x = rand();
    printf(" random: %d", x);
}
