// 
#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num < 0) { 
        printf("No factorial of negative numbers \n");
    } else {
        printf("Factorial of %d is %lld\n", num, factorial(num));
    }

    return 0;
}

