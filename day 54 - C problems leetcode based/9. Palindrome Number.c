//9. Palindrome Number

#include <stdio.h>
#include <stdbool.h>

bool flag(int x)
{
    
    if (x < 0)
    {
        return false;
    }
    
    int og = x;
    long rev = 0;

    while (x != 0)
    {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x /= 10;
    }

    return (rev == og);
}

int main()
{
    int n;
    
    while (1)
    {
    printf("enter a number: ");
    scanf("%d", &n);

    if (flag(n))
        printf("%d is a palindrome.\n\n", n);
    else
        printf("%d is not a palindrome.\n\n", n);
    }
    return 0;
}

