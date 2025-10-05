#include <stdio.h>

int count(int arr[], int size, int x) {
    int c = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == x)
            c++;
    }
    return c;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int x = 2;

    printf("Number %d occurs %d times\n", x, count(arr, size, x));

    return 0;
}
