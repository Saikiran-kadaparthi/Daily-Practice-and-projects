#include<stdio.h>
int main()
{
	int vowels= 0, consonants= 0;
	char str[100];
	printf("Enter your string : ");
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
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
		
		   str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			vowels++;
		}
		else if (isalpha(str[i]))
		{
			consonants++;
		}
	}
		
	printf("Your string has %d Vowels and %d consonants.", vowels, consonants);
	
	return 0;		
}
