//multiplication of two matrices
#include<stdio.h>
int main()
{
	int size_row1, size_row2, size_col1, size_col2;
	int i, j, k;
	printf("Enter Row size of first matrix : ");
	scanf("%d", &size_row1);
	printf("Enter Column size of first matrix : ");
	scanf("%d", &size_col1);
	printf("Enter Row size of second matrix : ");
	scanf("%d", &size_row2);
	printf("Enter Column size of second matrix : ");
	scanf("%d", &size_col2);
	int mat1[size_row1][size_col1], mat2[size_row2][size_col2], result[size_row1][size_col2];
	
	if(size_col1 != size_row2)
	{
		printf("Invalid size of matrices!");
		return 0;
	}
	//elements input
	printf("\nEnter elements of first matrix : \n");
	for(i=0; i<size_row1; i++)
	{
		for(j=0; j<size_col1; j++)
		{
		printf("Enter element [%d][%d] : ", i, j);
		scanf("%d",&mat1[i][j]);
		}
	}
	printf("\nEnter elements of second matrix : \n");
	for(i=0; i<size_row2; i++)
	{
		for(j=0; j<size_col2; j++)
		{
		printf("Enter element [%d][%d] : ", i, j);
		scanf("%d",&mat2[i][j]);
		}
	}
	
	for(i=0; i<size_row1; i++)
	{
		for(j=0; j<size_col2; j++)
		{
			result[i][j] = 0;
		}
	}
	
	//multiplication logic!
	for (i=0; i<size_row1; i++)
	{
        for (j=0; j<size_col2; j++)
		{
            for (k=0; k<size_col1; k++)
			{
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
	
	//Printing original matrix!
	printf("\nFirst matrix : \n");
	for(i=0; i<size_row1; i++)
	{
		for(j=0; j<size_col1; j++)
		{
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	printf("\nSecond matrix : \n");
	for(i=0; i<size_row2; i++)
	{
		for(j=0; j<size_col2; j++)
		{
			printf("%d ", mat2[i][j]);
		}
		printf("\n");
	}
	
	//result printing!!!
	printf("\nResult :: \n\n");
	for(i=0; i<size_row1; i++)
	{
		for(j=0; j<size_col2; j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
