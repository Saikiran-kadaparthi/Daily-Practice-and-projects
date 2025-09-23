#include <stdio.h>

int main() {
    int arr[] = {1,2,1,2};
    int size, palindrome = 1;
    int i;
    size = sizeof(arr)/sizeof(arr[0]);
    
    for (i=0; i<size; i++)
    {
        if(arr[i] != arr[size - i - 1])
        {
            palindrome = 0;
            break;
        }
    }
    
    if(palindrome)
    {
        printf("Given array is an palindrome!");
    }
    else
    {
        printf("Given array is not an palindrome!");
    }

    return 0;
    
}