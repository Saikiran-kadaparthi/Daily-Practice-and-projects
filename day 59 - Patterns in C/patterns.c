#include <stdio.h>

int main()
{
    int n = 5, r, c;
    
    //pattern one..
    for(r=0; r<n; r++)
    {
    	for(c=0; c<n; c++)
    	{
    		printf("* ");
		}
		printf("\n");
	}
	
	printf("\n\n");
    
    //pattern two..
    for(r=0; r<n; r++)
    {
    	for(c=0; c<=r; c++)
    	{
    		printf("* ");
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//pattern three..
	for(r=n; r>=0; r--)
	{
		for(c=0; c<r; c++)
		{
			printf("* ");
			
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//pattern four..
	
	for(r=1; r<=n; r++)
	{
		for(c=1; c<=r; c++)
		{
			printf("%d ",c);
		}
		printf("\n");
	}
    
    printf("\n\n");
    
    //pattern five
    
	for(r=1; r<n*2; r++)
	{
		if (r<=n)
		{
			for(c=1; c<=r; c++)
			{
				printf("* ");
			}
		printf("\n");
		}
		
		else
		{
			for (c=r; c<n*2; c++)
			{
				printf("* ");
			}
		printf("\n");
		}
		
	}    
	
	printf("\n\n");
	
	//pattern six...
	/* 
	    *
	   **
	  ***
	 ****
	*****
	*/
	
	for(r=n+1; r>1; r--)
	{
		for (c = 0; c <= n - r; c++)
		{
			printf(" ");
		}
		int c2;
		for (c2 = 1; c2 <= r; c2++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	
	
	
    return 0;
}
