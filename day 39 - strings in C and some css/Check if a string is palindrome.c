//Check if a string is palindrome.

#include<stdio.h>
int main()
{
	char str[100];
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
	for(i=0; i<count/2; i++)
	{
		if(str[i] != str[count-i-1])
		{
			palindrome--;
			break;
		}
	}
	
	if(palindrome)
	{
		printf("Given string is a palindrome");
	}
	else
	{
		printf("Given string is not a palindrome!");
	}
	
	return 0;
}
