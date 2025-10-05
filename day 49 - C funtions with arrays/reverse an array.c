#include <stdio.h>

void rev(int arr[], int size) {
    int temp;
    for(int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void revprint(int arr[], int size) {
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n[] = {1, 2, 3, 4, 5};
    int size = sizeof(n)/sizeof(n[0]);

    rev(n, size);
    revprint(n, size);

    return 0;
}
