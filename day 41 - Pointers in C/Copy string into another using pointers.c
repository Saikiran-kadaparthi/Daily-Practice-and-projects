//Copy one string into another using pointers (no strcpy).
#include<stdio.h>
int main()
{
	char str[5] = "he4lo", str2[6];
	char *p = str, *p2 = str2;
	
	
	while (*p != '\0')
	{
		*p2 = *p;
		p2++;
		p++;
	}
	
	
	
	printf("Orginal array : %s \n Copy array : %s", str, str2);
	
	return 0;
	  
}
