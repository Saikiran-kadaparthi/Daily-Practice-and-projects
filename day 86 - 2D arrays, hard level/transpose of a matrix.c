//transpose of a matrix
#include<stdio.h>
int main()
{
	//size input
	int size_row; int size_col;
	printf("Row size of the matrix : ");
	scanf("%d", &size_row);
	printf("Column size of the matrix : ");
	scanf("%d", &size_col);
	//elements input;
	printf("\n\n");
	int mat[size_row][size_col];
	int i,j;
	for(i=0; i<size_row; i++)
	{
		for(j=0; j<size_col; j++)
		{
			printf("Element [%d][%d] : ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	//printing original array
	printf("Original matrix : \n\n");
	for(i=0; i<size_row; i++)
	{
		for(j=0; j<size_col; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	//printing transpose matrix;
	printf("Transpose of the given matrix : \n\n");
	for(i=0; i<size_row; i++)
	{
		for(j=0; j<size_col; j++)
		{
			printf("%d ", mat[j][i]);
		}
		printf("\n");
	}
	return 0;
}
