#include <stdio.h>

int sum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n[] = {5, 10, 15, 20};
    int size = sizeof(n) / sizeof(n[0]);

    printf("Sum = %d\n", sum(n, size));

    return 0;
}
