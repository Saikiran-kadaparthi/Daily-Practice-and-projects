//symmetric matrix
#include<stdio.h>
int main()
{
	//size input
	int size_row; int size_col;
	printf("Row size of the matrix : ");
	scanf("%d", &size_row);
	printf("Column size of the matrix : ");
	scanf("%d", &size_col);
	//error?!
	if (size_row != size_col)
	{
		printf("\nSymmetric matrix must be a square matrix!");
		return 0;
	}
	
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
	printf("\n\nOriginal matrix :\n");
	for(i=0; i<size_row; i++)
	{
		for(j=0; j<size_col; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	//comparing logic
	for(i=0; i<size_row; i++)
	{
		for(j=0; j<size_col; j++)
		{
			if (mat[i][j] != mat[j][i])
			{
				printf("\n\nGiven matrix is not symmetric!!");
				return 0;
			}
		}
		
	}

	printf("\n\nGiven matrix is Symmetric!!");
	return 0;
}
