#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i = 0, j = 0, k = 0;
        printf("Enter number of elements in the first array : ");

    scanf("%d", &n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
            printf("Enter number of elements in the second array : ");
    scanf("%d", &n2);
    for(j = 0; j < n2; j++) {
        scanf("%d", &arr2[j]);
    }
    i = 0; j = 0; k = 0;
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while(i < n1) {
        merged[k++] = arr1[i++];
    }
    while(j < n2) {
        merged[k++] = arr2[j++];
    }
    for(i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
