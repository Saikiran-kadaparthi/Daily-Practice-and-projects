//Print value and address using pointer
#include <stdio.h>

int main() {
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int *p = &n;
	
    printf("value of n: %d\n", n);
    printf("address of n: %p\n", &n);
    printf("value of n using pointer: %d\n", *p);
	
    return 0;
}

