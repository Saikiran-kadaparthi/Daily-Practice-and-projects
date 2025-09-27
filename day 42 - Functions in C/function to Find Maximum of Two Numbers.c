//function to Find Maximum of Two Numbers

#include <stdio.h>
int max(int a, int b)
{
    if (a > b){
        return a;
	}
    else
    {
	    return b;
	}
}

int main()
{
    int x = 10, y = 20;
    int m = max(x, y);
    printf("Max: %d", m);
    return 0;
}

