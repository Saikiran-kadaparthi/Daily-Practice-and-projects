#include <stdio.h>

int main() {
    int arr[100], n, i, is_sorted = 1;
                printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 1; i < n; i++) {
        if(arr[i] > arr[i - 1]) {
            is_sorted = 0;
            break;
        }
    }

    if (is_sorted)
    {
        printf("Given array is in sorted;");
    }


    return 0;
}
