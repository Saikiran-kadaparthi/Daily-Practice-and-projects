#include <stdio.h>

int main() {
    int arr[] = {1,2,2,2,1,1,2,1,2,2};
    int size, ele=0, count=0;
    int i;
    
    size = sizeof(arr)/sizeof(arr[0]);
        
    for(i=0; i <size; i++)
    {
        if (count == 0)
        {
            ele = arr[i];
            count++;
            
        }
        else if (arr[i] == ele)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    
    
    count = 0;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == ele)
        {
            count++;
        }
    }
    
    
    if(count > size/2)
    {
        printf("Majority element : %d", ele);
    }
    else 
    {
        printf("No majority element found!");
    }
    
    
    return 0;
    
}