//Find the length of a string using a pointer.

#include<stdio.h>
int main()
{
	char str[100] = "hello world";
	
	char *ptr = str;
	int size = 0;
	
	while(*ptr!= '\0')
	{
		size++;
		ptr++;
	}
	
	printf("%d", size);
	return 0;

}
