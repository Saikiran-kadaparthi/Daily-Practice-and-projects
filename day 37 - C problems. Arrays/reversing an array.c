#include <stdio.h>

int main() {
    int arr[100], n, i;
    printf("Enter number of elements in a array : ");
    scanf("%d", &n);
        printf("Enter %d array elements : ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    int s = 0, e = n - 1, temp;
    while(s < e) {
        temp = arr[s];
        arr[s] = arr[s];
        arr[e] = temp;
        s++;
        e--;
    }
    printf("\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
