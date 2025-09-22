#include <stdio.h>

int main() {
    int arr1[100], arr2[100], n1, n2, i, j;
            printf("Enter number of elements in the first array : ");

    scanf("%d", &n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
            printf("Enter number of elements in the second array : ");
    scanf("%d", &n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    return 0;
}
