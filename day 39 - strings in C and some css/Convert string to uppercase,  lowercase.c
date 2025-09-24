//Convert string to uppercase / lowercase (without strupr / strlwr).

#include<stdio.h>
int main()
{
	int i;	
	char str[100];
	printf("Enter your string : ");
	fgets(str, 100, stdin);
	
	int count=0;
	while (str[count] != '\0')
	{
		count++;
	}
	count--;
	
	for(i=0; i < count; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	}
	
	printf("LowerCase : %s", str);
	
	for(i=0; i < count; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	printf("UpperCase : %s", str);

	return 0;
	
}
