#include <stdio.h>

void arr(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n[] = {10, 20, 30, 40};
    int size = sizeof(n) / sizeof(n[0]);

    arr(n, size);

    return 0;
}
