//Find Maximum and Minimum Element in a matrix
#include<stdio.h>
int main()
{
	//size input and initilization of matrix
	int size_row, size_col;
	printf("Enter row size of the matrix : ");
	scanf("%d", &size_row);
	printf("Enter column size of the matrix : ");
	scanf("%d", &size_col);
	int mat[size_row][size_col];
	//All elements input
	printf("Enter elements of matrix : \n\n");
	int i, j;
	for(i=0; i<size_row; i++)
	{
		for(j=0; j<size_col; j++)
		{
			printf("Enter matrix element [%d][%d] : ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	int max=mat[0][0], min=mat[0][0];
	for(i=0; i<size_row; i++)
	{
		for(j=0; j<size_col; j++)
		{
			if(max > mat[i][j]) max=mat[i][j];
			if(min < mat[i][j]) min=mat[i][j];
		}
	}
	
	printf("\n\n Max : %d \n Min : %d", max, min);
	
	return 0;
}
