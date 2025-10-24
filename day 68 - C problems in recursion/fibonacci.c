// fibonacci
#include <stdio.h>

int fun(int n)
{
	
    if(n <= 1)
    {
        return n;
	}
	
    return fun(n - 1) + fun(n - 2);
}

int main()
{
	int n;
	printf("Give a number : ");
	scanf("%d", &n);
	
    printf("%d\n", fun(n));
    return 0;
    
}

