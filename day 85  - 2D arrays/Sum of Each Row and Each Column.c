//Sum of All Rows and columns in a Matrix
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
	
	//Sum of all row
	int row_sum[row_size];
	for(i=0; i<row_size; i++)
	{
		row_sum[i] = 0;
		for(j=0; j<col_size; j++)
		{
			row_sum[i] = row_sum[i] + mat[i][j];
		}
	}
	//sum of All columns
	int col_sum[col_size];
	for(j=0; j<col_size; j++)
	{
		col_sum[j]=0;
		for(i=0; i<row_size; i++)
		{
			col_sum[j] = col_sum[j] + mat[i][j];
		}
	}
	//printing the given matrix
	for(i=0; i<row_size; i++)
	{
		for(j=0; j<col_size; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	//printing sum of rows
	for(i=0; i< row_size; i++)
	{
		printf("\nSum of Row %d : %d ", i+1, row_sum[i]);
	}	
	for(j=0; j< row_size; j++)
	{
		printf("\nSum of Column %d : %d ", i+1, col_sum[j]);
	}

	return 0;
}
