//number of digits in a number.

#include <stdio.h>

int count(int n) {
	
    if (n == 0)
	{
	return 1;
	}
	if (n < 0)
	{
	n = -n;
	}
    int count = 0;
    
    while (n > 0) {
        count++;
        n /= 10;
    }
    
    return count;
}

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Number of digits: %d\n", count(num));

    return 0;
}

