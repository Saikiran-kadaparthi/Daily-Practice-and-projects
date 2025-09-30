//palindrome check using funtions...

#include <stdio.h>

int flag(int n) 
{

    int og = n, rev = 0;
    
    while (n > 0) 
	{
		
        rev = rev * 10 + n % 10;
        n /= 10;
        
    }
    
    return og == rev;
}

int main() {
	
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative number not allowed\n");
    } 
	else if (flag(n)) {
        printf("%d is a palindrome\n", n);
    } else 
	{
        printf("%d is not a palindrome\n", n);
    }

    return 0;
}

