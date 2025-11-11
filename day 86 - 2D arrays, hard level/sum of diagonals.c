//Sum of diagonals
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
	
	if(size_row != size_col)
	{
		printf("Sum of diagonals only possible on square matrix!");
		return 0;
	}
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
	//sum of primary diagonals!
	int primary_sum = 0;
	for(i=0; i<size_row; i++)
	{
		primary_sum += mat[i][i];
	}
	//sum of secondary diagonals!
	int secondary_sum = 0;
	for(i=0; i<size_row; i++)
	{
		secondary_sum += mat[i][size_col-i-1];
	}
	
	//printing matrix and sums
	for(i=0; i<size_row; i++)
	{
		for(j=0; j<size_col; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("Sum of primary diagonals : %d", primary_sum);
	printf("\nSum of secondary diagonals : %d", secondary_sum);
	
	
}
