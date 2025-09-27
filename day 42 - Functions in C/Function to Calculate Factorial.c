//Function to Calculate Factorial

#include <stdio.h>

int f(int n) {
    int fact = 1;
    int i;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int r = f(num);
    printf("Factorial: %d\n", r);
    return 0;
}

