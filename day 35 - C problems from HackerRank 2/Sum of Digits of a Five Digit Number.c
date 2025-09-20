#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    
    int temp, sum=0;
    while (n)
    {
            
        temp = n%10;
        sum = sum + temp;
        n = n/10;
        
    }
        
    printf("%d", sum);
    
    
    return 0;
}
