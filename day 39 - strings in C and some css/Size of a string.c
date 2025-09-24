#include<stdio.h>
int main(){
	char str[100];
	int count = 0;
	
	printf("Enter your String : ");
	fgets(str, 100, stdin);
	
	printf("\nYour string : %s", str);
	
	while (str[count] != '\0')
	{
		count++;
	}

	printf("And string size : %d\n", count-1);
	
	return 0;

}
