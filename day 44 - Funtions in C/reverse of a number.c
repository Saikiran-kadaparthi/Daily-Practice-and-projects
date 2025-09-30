//reverse of a number using funtions.

#include <stdio.h>

int rev(int n) {
    int rev = 0;
    
    while (n != 0)
	{
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    
    return rev;
}

int main() {
	
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);


    printf("Reversed number: %d\n", rev(n));
    return 0;
}

