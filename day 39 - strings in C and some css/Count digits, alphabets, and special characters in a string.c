//Count digits, alphabets, and special characters in a string.

#include<stdio.h>
int main()
{
	char str[100];
	int digits=0, alphabets=0, spl_char=0;
	
	printf("Enter your String : ");
	fgets(str, 100, stdin);
	
	int count =0;
	while(str[count] != '\0')
	{
		count++;
	}
	count --;
	int i;
	for( i=0; i<count; i++)
	{
		if(isdigit(str[i]))
		{
			digits++;
		}
		else if(isalpha(str[i]))
		{
			alphabets++;
		}
		else if (ispunct(str[i]))
		{
			spl_char++;
		}	
	}
	
	printf("\n Digits : %d \n Alphabets : %d \n Special characters : %d", digits, alphabets, spl_char);
	
	return 0;
	
}
