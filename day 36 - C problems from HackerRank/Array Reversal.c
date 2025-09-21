#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, *arr, i;
    scanf("%d", &num);

    arr = (int*) malloc(num * sizeof(int));
// Array elements input
    for (i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
// reverse Array logic
    int rev[num]; 

    for (i = 0; i < num; i++) {
        rev[i] = arr[num - 1 - i];
    }


// transfer rev array from temp to original array

    for (i = 0; i < num; i++) {
        arr[i] = rev[i];
    }

    //print reversed array elements
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
