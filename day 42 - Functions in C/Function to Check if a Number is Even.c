//Function to Check if a Number is Even
#include <stdio.h>

int isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int n;
    
    printf("Enter a number : ");
    scanf("%d", &n);
    if (isEven(n))
        printf("Given Number is a Even\n");
    else
        printf("Given Number is a Odd\n");
    return 0;
}

