///Copy one string to another (manual loop, no strcpy).

#include<stdio.h>
int main()
{
	char str[100], copy_Str[100];
	
	int palindrome = 1;
	printf("Enter Your String : ");
	fgets(str, 100, stdin);
	
	int count=0;
	while (str[count] != '\0')
	{
		count++;
	}
	count--;
	
	int i;
	for(i=0; i<count; i++)
	{
		copy_Str[i] = str[i];
	}
	
	printf("%s", copy_Str);
	return 0;
}
