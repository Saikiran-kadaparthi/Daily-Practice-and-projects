// adding two matrices
#include<stdio.h>
int main()
{
	int row_size, col_size;
	//matrices Size input
	printf("Enter row size of matrix : ");
	scanf("%d", &row_size);
	printf("Enter column size of matrix : ");
	scanf("%d", &col_size);
	int i, j;
	int mat1[row_size][col_size], mat2[row_size][col_size], result[row_size][col_size];
	
	//matrices elements input
	printf("\nFirst matrix\n\n");
	for(i=0; i<row_size; i++)
	{
		for(j=0; j<col_size; j++)
		{
			printf("Enter element [%d][%d] : ", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("\nSecond matrix\n\n");
	for(i=0; i<row_size; i++)
	{
		for(j=0; j<col_size; j++)
		{
			printf("Enter element [%d][%d] : ", i, j);
			scanf("%d", &mat2[i][j]);
		}
	}
	
	//Addition operation on matrices
	for(i=0; i<row_size; i++)
	{
		for(j=0; j<col_size; j++)
		{
			result[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
	//Matrices printing;
	printf("\n Original matrices : \n\n");
	for(i=0; i<row_size; i++)
	{
		for(j=0; j<col_size; j++)
		printf("%d ", mat1[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i=0; i<row_size; i++)
	{
		for(j=0; j<col_size; j++)
		printf("%d ", mat2[i][j]);
		printf("\n");
	}
	
	printf("\n\nAddition :: \n");
	for(i=0; i<row_size; i++)
	{
		for(j=0; j<col_size; j++)
		printf("%d ", result[i][j]);
		printf("\n");
	}
	
	return 0;
}
