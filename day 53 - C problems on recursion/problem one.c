#include <stdio.h>

int count(int n, int prev)
{

    if (n == 0)
    {
        return 1;
    }
    if (prev == 1)
    {
        return count(n - 1, 0);
    }
    else
    {
        return count(n - 1, 0) + count(n - 1, 1);
    }

}

int main()
{
    int n;
    scanf("%d", &n);

    int x = count(n, 0) + count(n, 1) - 1;
    printf("\n\n%d", x);
    return 0;

}
