//Sum of All Elements in Matrix
#include<stdio.h>
int main()
{
	//size input and initilization of matrix
	int row_size, col_size;
	printf("Enter row size of the matrix : ");
	scanf("%d", &row_size);
	printf("Enter column size of the matrix : ");
	scanf("%d", &col_size);
	int mat[row_size][col_size];
	//elements input
	printf("Enter elements of matrix : \n\n");
	int i, j;
	for(i=0; i<row_size; i++)
	{
		for(j=0; j<col_size; j++)
		{
			printf("Enter matrix element [%d][%d] : ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	//Sum of all elementsl
	int sum=0;
	for(i=0; i<row_size; i++)
	{
		for(j=0; j<col_size; j++)
		{
			sum += mat[i][j];
		}
	}
	
	printf("\n\n Sum of all elements in the matrix : %d", sum);
	return 0;
}
