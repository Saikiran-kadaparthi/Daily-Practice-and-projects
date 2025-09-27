//Function to Swap Two Numbers Using Pointers.
#include <stdio.h>

void swap	(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 3, y = 4;
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

