//Boundary Elements of Matrix
#include<stdio.h>
int main()
{
	int size_row, size_col;
	int i,j;
	//size input
	printf("Enter row size : ");
	scanf("%d", &size_row);
	printf("Enter column size : ");
	scanf("%d", &size_col);
	

	//elements input
	int mat[size_row][size_col];
	for(i=0; i<size_row; i++)
	{
		for(j=0; j<size_col; j++)
		{
			printf("Element [%d][%d] : ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\n");
	
	//printing matrix
	for(i=0; i<size_row; i++)
	{
		for(j=0; j<size_col; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	//printing rows and columns
	printf("First row :  ");
	for(i=0; i<size_row; i++)
	{
		printf("%d ",mat[0][i]);
	}
	printf("\nLast row :  ");
	for(i=0; i<size_row; i++)
	{
		printf("%d ",mat[size_row-1][i]);
	}
	
	printf("\nFirst column : \n");
	for(i=0; i<size_row; i++)
	{
		printf("%d\n",mat[i][0]);
	}
	printf("Last column : \n");
	for(i=0; i<size_row; i++)
	{
		printf("%d\n",mat[i][size_col-1]);
	}
	
	
	return 0;
}
