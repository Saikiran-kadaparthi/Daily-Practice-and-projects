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
	
	for(r=1; r<=n; r++)
	{
		int c2;
		for (c = 1; c <= n-r; c++)
		{
			printf(" ");
		}
		
		for (c2 = 1; c2 <= r; c2++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	
	
	printf("\n\n");
	
	//pattern seven
	
	for(r=1; r<=n; r++)
	{
		int c2;
		for (c = 0; c <= n-r; c++)
		{
			printf("*");
		}
		
		for (c2 = 1; c2 <= r; c2++)
		{
			printf(" ");
		}
		printf("\n");
		
	}
	
	
	printf("\n\n");
	
	//pattern eight
	
	for(r=1; r<=n; r++)
	{
		int c2;
		for (c = 1; c <= n-r; c++)
		{
			printf(" ");
		}
		
		for (c2 = 1; c2 <= r; c2++)
		{
			printf("* ");
		}
		printf("\n");
		
	}
	
	
	printf("\n\n");
	
	
	//pattern nine. 

    for ( r=0; r<n; r++) 
	{
        for (c=0; c<r; c++) 
		{
            printf("  ");
        }

        for (c=n-r; c>0; c--)
		{
            printf("* ");
        }

        printf("\n");
    }
	
	printf("\n\n");	
	//pattern ten..
	

    for (r=0; r<n; r++)
	{
        for (c=0; c<r; c++)
		{
            printf(" ");
        }

        for (c=n-r; c>0; c--)
		{
            printf("* ");
        }

        printf("\n");
    }
    
    printf("\n\n");
    
    //pattern eleven
    
	for (r = 0; r<n; r++)
	{

        for (c= 0; c<r; c++)
		{
            printf(" ");
        }

        for (c=0; c<n*2-1; c++) 
		{
            if (r == 0 || c == 0 || c == 2*(n - r) - 2)
			{
                printf("*");
            }
			else
			{
                printf(" ");
            }
        }

        printf("\n");
        
    }

	
	
	
    return 0;
}
