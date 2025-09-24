//Reverse a string (without strrev).

#include<stdio.h>
int main()
{
	int i;
	char str[100], rev_str[100];
	
	printf("Enter Your String : ");
	fgets(str, 100, stdin);
	
	int count=0;
	while (str[count] != '\0')
	{
		count++;
	}
	count--;
	
	for(i=0; i<count; i++)
	{
		rev_str[i] = str[count-i-1];
	}
	
	printf("%s", rev_str);
	
	return 0;
}
