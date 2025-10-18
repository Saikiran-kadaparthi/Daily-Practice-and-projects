//maximum - Sliding window

#include <stdio.h>

int main() {
    
    int i, size;
    
    printf("Enter size of array : ");
    scanf("%d",&size);
    
    int arr[size];
    
    for(i =1; i<=size; i++)
    {
        printf("Enter element %d : ", i);
        scanf("%d",&arr[i-1]);
    }

    int k;
    printf("Enter window Size : ");
    scanf("%d", &k);
    
    for(i=0; i<=size-k; i++)
    {
        int j;
        int j2 = i + (k-1);
        int r = arr[i];
        
        for(j=i; j<j2; j++)
        {
            if(arr[j+1] > r)
            {
                r = arr[j+1];
            }
        }
        
        
        printf("\n Maximum of window %d is : %d", i+1,  r);
    }
    
    return 0;
}
