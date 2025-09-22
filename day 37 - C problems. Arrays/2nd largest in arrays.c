#include <stdio.h>

int main() {
    int arr[100], n, i, max1, max2;
            printf("Enter number of elements in the array : ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }
    for(i = 2; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    printf("%d\n", max2);
    return 0;
}
